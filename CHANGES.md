# 0.6.0 (2026-11-04)
- #2: Support Menhir 20260209: `%merge` functions for the GLR back-end, and
  attributes after semantic actions
- #2: Fix the scanning of embedded OCaml: a type variable before a closing
  brace, OCaml quoted strings in actions, and `}`, `]` or `%}` in the postlude
- #2: Test against Menhir's own test suite and the `menhir` binary, in CI
- #2: Regenerate the bindings with tree-sitter CLI 0.27.0 at ABI 14, adding Go,
  Python and C bindings. The Rust crate now exposes `LANGUAGE` in place of
  `language()`
- #3: Add this changelog, and a CI check that pull requests update it
- #4: Stop publishing releases to npm

# 0.5.0 (2026-04-06)
First release from tmcgilchrist/tree-sitter-menhir, which takes over
maintenance from Kerl13/tree-sitter-menhir.
- Inject OCaml into headers, actions, attributes, types and the postlude, with
  an external scanner that finds the extent of the OCaml code
- Add highlight and injection queries
- Update to tree-sitter CLI 0.25, and replace `nan` with `node-addon-api` in
  the Node binding
- Move the corpus tests to `test/corpus`, and lint `grammar.js` with ESLint
- Replace Travis CI with GitHub Actions

# 0.4.0 (2023-07-17)
- Kerl13/tree-sitter-menhir#6: Rewrite the external scanner in C, instead of
  C++ (Pieter Goetschalckx)

# 0.3.0 (2022-09-01)
- Parse applications of parameterized symbols, such as `list(X)`, as
  `funcall` nodes, for syntax highlighting

# 0.2.0 (2022-09-01)
- Update to tree-sitter CLI 0.20, and add a Rust binding
- Move the Node binding to `bindings/node`

# 0.1.3 (2020-05-29)
- Kerl13/tree-sitter-menhir#3: Update to tree-sitter 0.15, which adds
  `node-types.json`, and use wide character functions in the scanner (Pieter
  Goetschalckx)
- Kerl13/tree-sitter-menhir#4: Make the Node binding compatible with
  Electron 5.0 (Andreas Dahl)
- Update to tree-sitter CLI 0.16, and run all of Menhir's test suite

# 0.1.2 (2019-03-15)
- Kerl13/tree-sitter-menhir#2: Parse OCaml code with grammar rules, keeping
  the external scanner for OCaml comments only. Fixes
  Kerl13/tree-sitter-menhir#1 (Pieter Goetschalckx)
- Parse line comments, the postlude and `< ... >` types with grammar rules

# 0.1.1 (2019-02-17)
- Test against Menhir's test suite
- Fix the scanner on null characters, both at the end of input and in OCaml
  strings
- Fix the regular expression for qualified identifiers

# 0.1.0 (2019-02-10)
Initial release by Martin Pépin.
- Parse Menhir grammars, in both the old and the new rule syntax
- Scan OCaml headers, actions, types and attributes with an external scanner
- Parse the postlude and comments
