# tree-sitter-menhir

[![CI](https://github.com/Kerl13/tree-sitter-menhir/actions/workflows/ci.yml/badge.svg)](https://github.com/Kerl13/tree-sitter-menhir/actions/workflows/ci.yml)

[Menhir](http://gallium.inria.fr/~fpottier/menhir/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Features

- ✅ Full Menhir syntax support (both old and new rule syntax)
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

```bash
npm install tree-sitter-menhir
```

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

```bash
# Install dependencies
npm install

# Generate parser
npm run build

# Run tests
npm run test:corpus    # Corpus tests
npm run test           # Node binding tests
npm run test:examples  # Parse real Menhir files

# Start playground
npm start
```

## Testing

The grammar is tested against:
- Custom corpus tests in `test/corpus/`
- Example Menhir files in `test/examples/`
- Official Menhir test suite (800+ real-world `.mly` files)

## References

- [Menhir manual](http://gallium.inria.fr/~fpottier/menhir/manual.html)
- [Menhir parser and lexer](https://gitlab.inria.fr/fpottier/menhir)
- [Tree-sitter documentation](https://tree-sitter.github.io/)

## License

MIT
