#!/usr/bin/env bash
# Parse the .mly files of Menhir's own sources and test suite.
#
#   * Every .mly file outside test/static/bad must parse without errors.
#   * Every file in test/static/bad that Menhir rejects with a syntax or
#     lexical error (according to its .exp file) must produce an error here
#     too. The other files there have errors that Menhir finds later, such
#     as an undefined symbol, so they must parse without errors.
#
# Environment:
#   MENHIR_REF  commit or branch of https://gitlab.inria.fr/fpottier/menhir
#               (default: read from the Makefile). Release tags will not
#               do: they are stripped of the test suite.
#   TS          tree-sitter CLI (default: tree-sitter)
#
# With --fetch-only, only download the Menhir sources into test_suite/.

set -euo pipefail

cd "$(dirname "$0")/.."

TS=${TS:-tree-sitter}
MENHIR_REF=${MENHIR_REF:-$(make -s menhir-ref)}
DIR=test_suite/menhir-$MENHIR_REF

if [ ! -d "$DIR" ]; then
  # Unpack next to the final location, so that a failed download does not
  # leave a half-filled directory behind for the next run to trust.
  mkdir -p test_suite
  tmp=$(mktemp -d test_suite/.download.XXXXXX)
  curl -fsSL "https://gitlab.inria.fr/fpottier/menhir/-/archive/$MENHIR_REF/menhir-$MENHIR_REF.tar.gz" |
    tar -xz -C "$tmp" --strip-components 1
  mv "$tmp" "$DIR"
fi
echo "Menhir at $MENHIR_REF in $DIR"

if [ "${1:-}" = "--fetch-only" ]; then
  exit 0
fi

list=$(mktemp)
trap 'rm -f "$list"' EXIT

# Valid files: they must all parse cleanly.
find "$DIR" -name '*.mly' -not -path '*/bad/*' | sort >"$list"
echo "Parsing $(wc -l <"$list" | tr -d ' ') valid .mly files..."
if ! "$TS" parse --quiet --paths "$list"; then
  echo "FAIL: some valid Menhir files do not parse (see above)" >&2
  exit 1
fi

# Invalid files. Menhir's error messages for syntax errors, and for the
# errors of its lexer (see driver/stage1/Lexer.mll).
syntax='syntax error|unbalanced opening|unterminated|unknown directive'
syntax="$syntax|unexpected character|illegal newline|illegal backslash"
syntax="$syntax|is not permitted in a token alias"
failures=0
rejected=0
accepted=0
for mly in "$DIR"/test/static/bad/*.mly; do
  exp=${mly%.mly}.exp
  if [ -f "$exp" ] && grep -E -q "$syntax" "$exp"; then
    rejected=$((rejected + 1))
    if "$TS" parse --quiet "$mly" >/dev/null 2>&1; then
      echo "FAIL: $mly is a syntax error for Menhir but parses cleanly" >&2
      failures=$((failures + 1))
    fi
  else
    # No .exp file: a second file for a test of several files.
    accepted=$((accepted + 1))
    if ! "$TS" parse --quiet "$mly" >/dev/null 2>&1; then
      echo "FAIL: $mly has no syntax error for Menhir but does not parse" >&2
      failures=$((failures + 1))
    fi
  fi
done
echo "Checked $rejected files that Menhir rejects with a syntax error"
echo "Checked $accepted files that Menhir rejects for other reasons"

if [ "$failures" -ne 0 ]; then
  echo "FAIL: $failures invalid files were not handled as Menhir does" >&2
  exit 1
fi
echo "OK"
