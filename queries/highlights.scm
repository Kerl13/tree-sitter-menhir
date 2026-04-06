; Menhir syntax highlighting

; Keywords
[
  "%{"
  "%}"
  "%token"
  "%type"
  "%start"
  "%left"
  "%right"
  "%nonassoc"
  "%parameter"
  "%attribute"
  "%on_error_reduce"
  "%public"
  "%inline"
  "%prec"
  "let"
] @keyword

; Delimiters (anonymous nodes are automatically handled by tree-sitter)
; Punctuation is handled by the grammar's anonymous tokens

; Operators and separators are handled by grammar tokens

; Comments
(line_comment) @comment.line
(comment) @comment.block
(ocaml_comment) @comment.block

; Identifiers
(lid) @variable
(uid) @type
(qid) @string.special

; Rules
(symbol (lid) @function)
(symbol (uid) @type)

; Modifiers
(modifier) @operator

; Flags
(flags) @keyword
