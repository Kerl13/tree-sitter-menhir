# tree-sitter-menhir

[![CI](https://github.com/tmcgilchrist/tree-sitter-menhir/actions/workflows/ci.yml/badge.svg)](https://github.com/tmcgilchrist/tree-sitter-menhir/actions/workflows/ci.yml)

[Menhir](http://gallium.inria.fr/~fpottier/menhir/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Features

- ✅ Full Menhir syntax support, up to Menhir 20260209 (both old and new rule
  syntax, attributes, and `%merge` functions for the GLR back-end)
- ✅ **Language injection** for OCaml code using [tree-sitter-ocaml](https://github.com/tree-sitter/tree-sitter-ocaml)
  - Headers: `%{ ... %}`
  - Actions: `{ ... }`
  - Attributes: `[@ ... ]`, `%[@ ... ]`
  - Postlude: code after second `%%`
- ✅ **Type injection** for OCaml type expressions using tree-sitter-ocaml/grammars/type
  - Type annotations: `< ... >`
- ✅ Proper syntax highlighting for embedded OCaml code
- ✅ Support for nested OCaml comments and complex expressions

## Installation

### npm

Releases are not published to npm. The `tree-sitter-menhir` package there
is the last upstream release, 0.4.0, which predates this repository.

### Cargo

```bash
cargo add tree-sitter-menhir
```

## Usage

### Node.js

```javascript
const Parser = require('tree-sitter');
const Menhir = require('tree-sitter-menhir');

const parser = new Parser();
parser.setLanguage(Menhir);

const sourceCode = `
%{
  open Ast
%}

%token <int> INT
%start <expr> main

%%

main: e = expr EOF { e }
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

## Language Injection

This grammar uses tree-sitter's language injection feature to provide full OCaml syntax support within Menhir files. For the best experience:

### Required Grammars

Install these grammars for complete syntax highlighting:

- [tree-sitter-ocaml](https://github.com/tree-sitter/tree-sitter-ocaml) - for OCaml code blocks
- tree-sitter-ocaml/grammars/type - for type expressions

### Editor Support

Editors with tree-sitter support will automatically use language injection when these grammars are available:

- **Neovim** (with nvim-treesitter)
- **Helix**
- **Emacs** (with tree-sitter mode)
- **VS Code** (with tree-sitter extension)

OCaml code in actions, headers, and attributes will have full syntax highlighting, go-to-definition, and other language features.

## Development

The versions of the tree-sitter CLI, the parser ABI and Menhir are pinned in
the `Makefile`, and CI reads them from there. The ABI is 14 because most Emacs
builds cannot load ABI 15 yet. `package.json` pins the same tree-sitter CLI,
and CI checks that the two agree.

```bash
npm install            # Install dependencies (tree-sitter CLI, eslint)
make generate          # Regenerate src/ from grammar.js at the pinned ABI
make test              # Corpus and highlight tests
npm test               # Node binding tests
npm run lint           # Lint grammar.js
npm start              # Playground
```

## Testing

The grammar is tested at several levels:

- Corpus tests in `test/corpus/` and highlight tests in `test/highlight/`
  (`make test`).
- Menhir's own sources and test suite, at the commit of the pinned release
  (`make test-menhir`). Every valid `.mly` file (480 of them) must parse without
  errors. Of the files that Menhir rejects, every one with a syntax or lexical
  error (75 of them) must produce an error, and the others (124, with errors
  such as an undefined symbol) must parse without errors. Use
  `make test-menhir MENHIR_REF=master` to try unreleased Menhir; CI does this
  weekly.
- A comparison with the `menhir` binary itself (`make compare-menhir`, needs
  `menhir` on the `PATH`). For each file, the declared tokens, start symbols and
  rule names seen by tree-sitter must match what `menhir --only-preprocess-u`
  reports.
- Fuzzing of the corpus with `tree-sitter fuzz` (in CI).

To move to a new Menhir release, update `MENHIR_VERSION` (the opam version) and
`MENHIR_REF` (the commit of that release on Menhir's `master` branch; release
tags do not include the test suite) in the `Makefile`.

## References

- [Menhir manual](http://gallium.inria.fr/~fpottier/menhir/manual.html)
- [Menhir parser and lexer](https://gitlab.inria.fr/fpottier/menhir)
- [Tree-sitter documentation](https://tree-sitter.github.io/)

## License

MIT
