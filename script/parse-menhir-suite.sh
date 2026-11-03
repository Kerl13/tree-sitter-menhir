#!/usr/bin/env bash
# Parse the .mly files of Menhir's own sources and test suite.
#
#   * Every .mly file outside test/static/bad must parse without errors.
#   * Every file in test/static/bad that Menhir rejects with a syntax error
#     (according to its .exp file) must produce an error here too.
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

# Invalid files: those that Menhir rejects with a syntax error.
failures=0
count=0
for exp in $(grep -l -i 'syntax error' "$DIR"/test/static/bad/*.exp); do
  mly=${exp%.exp}.mly
  [ -f "$mly" ] || continue
  count=$((count + 1))
  if "$TS" parse --quiet "$mly" >/dev/null 2>&1; then
    echo "FAIL: $mly is a syntax error for Menhir but parses cleanly" >&2
    failures=$((failures + 1))
  fi
done
echo "Checked $count files that Menhir rejects with a syntax error"

if [ "$failures" -ne 0 ]; then
  echo "FAIL: $failures invalid files were accepted" >&2
  exit 1
fi
echo "OK"
