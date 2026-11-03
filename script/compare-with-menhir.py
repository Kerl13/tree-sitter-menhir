#!/usr/bin/env python3
"""Cross-check the tree-sitter parse of .mly files against Menhir itself.

For every input file, this script compares what tree-sitter sees with what
`menhir --only-preprocess-u` prints:

  * the set of declared tokens (%token),
  * the set of start symbols (%start),
  * the set of plain rule names (not %inline, not parameterized): each of
    these must appear as a rule in Menhir's output.

A file that Menhir itself rejects (some test files need extra flags or
companion files) is skipped and counted. Any other discrepancy is reported
and makes the script exit with status 1.

Usage: compare-with-menhir.py [--menhir PATH] [--tree-sitter PATH] FILE...
"""

import argparse
import re
import subprocess
import sys
import tempfile
import xml.etree.ElementTree as ET


def text(node):
    return "".join(node.itertext()).strip()


def parse_xml(tree_sitter, path):
    """Parse one file with the tree-sitter CLI and return its XML tree.

    The CLI cannot print XML for input that is not UTF-8, so such files
    (a few test files are Latin-1) are transcoded to a temporary copy.
    """
    with open(path, "rb") as f:
        data = f.read()
    try:
        data.decode("utf-8")
        target = path
        tmp = None
    except UnicodeDecodeError:
        tmp = tempfile.NamedTemporaryFile("wb", suffix=".mly")
        tmp.write(data.decode("latin-1").encode("utf-8"))
        tmp.flush()
        target = tmp.name
    # A non-zero exit only means the tree has an ERROR node; the XML is
    # still printed, and the caller checks for ERROR nodes itself.
    proc = subprocess.run(
        [tree_sitter, "parse", "--xml", "--no-ranges", target],
        capture_output=True,
        text=True,
    )
    if tmp:
        tmp.close()
    return ET.fromstring(proc.stdout).find("source")


def tree_sitter_facts(tree_sitter, path):
    """Return (tokens, starts, rules, has_error) as seen by tree-sitter."""
    source = parse_xml(tree_sitter, path)
    tokens, starts, rules = set(), set(), set()
    has_error = (
        source.find(".//ERROR") is not None or source.find(".//MISSING") is not None
    )
    for decl in source.iter("declaration"):
        keyword = (decl.text or "").strip()
        if keyword == "%token":
            for alias in decl.findall("terminal_alias_attrs"):
                tokens.add(text(alias.find("uid")))
        elif keyword == "%start":
            for nt in decl.findall("non_terminal"):
                starts.add(text(nt))
    for rule in source.iter("old_rule"):
        flags = rule.find("flags")
        symbols = rule.findall("symbol")  # the name, then any parameters
        if (flags is None or "%inline" not in text(flags)) and len(symbols) == 1:
            rules.add(text(symbols[0]))
    for rule in source.iter("new_rule"):
        inline = text(rule.find("equality_symbol")) == "=="
        symbols = rule.findall("symbol")  # parameters only
        if not inline and not symbols:
            rules.add(text(rule.find("lid")))
    return tokens, starts, rules, has_error


START_RE = re.compile(r"^%start\s+(\w+)", re.M)
# In the rules section, every line that is not indented starts a rule.
RULE_RE = re.compile(r"^([a-zA-Z_]\w*)", re.M)
# An attribute payload may contain ']' inside a string, as in [@symbol "]"].
ATTRIBUTE_RE = re.compile(r'\[@(?:"(?:[^"\\]|\\.)*"|[^\]"])*\]')
ALIAS_RE = re.compile(r'"(?:[^"\\]|\\.)*"\s*$')
TOKEN_NAME_RE = re.compile(r"\b([A-Z]\w*)\s*$")


def menhir_tokens(grammar):
    """Token names from Menhir's printed declarations.

    Each token is printed as %token [<type>] NAME ["alias"] [@attr]*, where
    the type may span several lines and contain '>' (as in ->). So split the
    section into declarations and take the name from the end of each one.
    """
    tokens = set()
    for decl in re.split(r"\n(?=%)", grammar):
        if decl.startswith("%token"):
            decl = ALIAS_RE.sub("", ATTRIBUTE_RE.sub("", decl).rstrip())
            m = TOKEN_NAME_RE.search(decl)
            if m:
                tokens.add(m.group(1))
    return tokens


RENAMED_RE = re.compile(r"nonterminal symbol (\w+) is renamed (\w+)")
UNREACHABLE_RE = re.compile(r"symbol (\w+) is unreachable")


def menhir_facts(menhir, path):
    proc = subprocess.run(
        [menhir, "--only-preprocess-u", path], capture_output=True, text=True
    )
    if proc.returncode != 0:
        return None
    grammar, _, rest = proc.stdout.partition("\n%%\n")
    rules, _, _postlude = rest.partition("\n%%")
    # Menhir drops unreachable rules, and renames rules that clash with its
    # standard library (list, option, ...). It says so on stderr.
    renamed = dict(RENAMED_RE.findall(proc.stderr))
    unreachable = set(UNREACHABLE_RE.findall(proc.stderr))
    return (
        menhir_tokens(grammar),
        set(START_RE.findall(grammar)),
        set(RULE_RE.findall(rules)),
        renamed,
        unreachable,
    )


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--menhir", default="menhir")
    ap.add_argument("--tree-sitter", default="tree-sitter")
    ap.add_argument("files", nargs="+")
    args = ap.parse_args()

    version = subprocess.run(
        [args.menhir, "--version"], capture_output=True, text=True
    ).stdout.strip()
    print(f"Comparing against {version}")

    checked = skipped = 0
    failures = []
    for path in args.files:
        ts_tokens, ts_starts, ts_rules, has_error = tree_sitter_facts(
            args.tree_sitter, path
        )
        if has_error:
            failures.append(f"{path}: tree-sitter reports a syntax error")
            continue
        m = menhir_facts(args.menhir, path)
        if m is None:
            skipped += 1
            continue
        checked += 1
        m_tokens, m_starts, m_rules, renamed, unreachable = m
        problems = []
        if ts_tokens != m_tokens:
            problems.append(
                f"tokens: tree-sitter only {sorted(ts_tokens - m_tokens)}, "
                f"menhir only {sorted(m_tokens - ts_tokens)}"
            )
        if ts_starts != m_starts:
            problems.append(
                f"start symbols: tree-sitter {sorted(ts_starts)}, "
                f"menhir {sorted(m_starts)}"
            )
        missing = {
            r for r in ts_rules if r not in unreachable and renamed.get(r, r) not in m_rules
        }
        if missing:
            problems.append(f"rules unknown to menhir: {sorted(missing)}")
        for p in problems:
            failures.append(f"{path}: {p}")

    for f in failures:
        print(f"FAIL {f}")
    print(
        f"{checked} files agree with menhir"
        if not failures
        else f"{len(failures)} discrepancies in {checked} files"
    )
    print(f"{skipped} files skipped (rejected by menhir on their own)")
    sys.exit(1 if failures else 0)


if __name__ == "__main__":
    main()
