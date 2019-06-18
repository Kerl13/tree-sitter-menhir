#!/bin/sh

set -euC

TS=node_modules/.bin/tree-sitter

TEST_DIR=test_suite

mkdir -p "$TEST_DIR"

if [ ! -d "$TEST_DIR/menhir" ]; then
  git clone https://gitlab.inria.fr/fpottier/menhir "$TEST_DIR/menhir"
fi

rm -f "$TEST_DIR/menhir/test/good/zipperposition.1.5-Parse_zf.mly"
rm -f "$TEST_DIR/menhir/test/good/boomerang.1.1.0-bparser.mly"
rm -f "$TEST_DIR/menhir/test/good/ldap.2.4.0-ldap_filterparser.mly"
rm -f "$TEST_DIR/menhir/test/good/dns.1.0.1-zone_parser.mly"

find "$TEST_DIR/menhir/test/good" -name \*.mly -exec "$TS" parse -q '{}' +
