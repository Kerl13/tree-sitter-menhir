#!/bin/sh

set -euC

TS=node_modules/.bin/tree-sitter

TEST_DIR=test_suite

mkdir -p "$TEST_DIR"

if [ ! -d "$TEST_DIR/menhir" ]; then
  git clone https://gitlab.inria.fr/fpottier/menhir "$TEST_DIR/menhir"
fi

find "$TEST_DIR/menhir/test/good" -name \*.mly -exec "$TS" parse -q '{}' +
