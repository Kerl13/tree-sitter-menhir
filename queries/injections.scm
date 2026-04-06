; Language injections for OCaml code in Menhir files

; Header blocks: %{ OCaml code %}
((header
  (ocaml) @injection.content)
 (#set! injection.language "ocaml"))

; Action blocks: { OCaml expression }
((action
  (ocaml) @injection.content)
 (#set! injection.language "ocaml"))

; Attributes: [@ OCaml payload ]
((attribute
  (ocaml) @injection.content)
 (#set! injection.language "ocaml"))

; Grammar attributes: %[@ OCaml ]
((grammar_attribute
  (ocaml) @injection.content)
 (#set! injection.language "ocaml"))

; Postlude: OCaml code after %%
((postlude
  (ocaml) @injection.content)
 (#set! injection.language "ocaml"))

; Type expressions: < OCaml type >
((type
  (ocaml_type) @injection.content)
 (#set! injection.language "ocaml_type"))
