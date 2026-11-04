# Unreleased
- #2: Support Menhir 20260209: `%merge` functions for the GLR back-end, and
  attributes after semantic actions
- #2: Fix the scanning of embedded OCaml: a type variable before a closing
  brace, OCaml quoted strings in actions, and `}`, `]` or `%}` in the postlude
- #2: Test against Menhir's own test suite and the `menhir` binary, in CI
- #2: Regenerate the bindings with tree-sitter CLI 0.27.0 at ABI 14, adding Go,
  Python and C bindings. The Rust crate now exposes `LANGUAGE` in place of
  `language()`

# 0.5.0
- Inject OCaml into headers, actions, attributes, types and the postlude, with
  an external scanner for the OCaml code
- Replace Travis CI with GitHub Actions

# 0.4.0
- Rewrite the external scanner in C

# 0.2.0
- Add aliases for syntax highlighting
