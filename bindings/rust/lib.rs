//! This crate provides Menhir language support for the [tree-sitter] parsing library.
//!
//! Typically, you will use the [`LANGUAGE`] constant to add this language to a
//! tree-sitter [`Parser`], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! %token <int> INT
//! %start <int> main
//! %%
//! main: i = INT { i }
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_menhir::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading Menhir parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [`Parser`]: https://docs.rs/tree-sitter/0.27.0/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

unsafe extern "C" {
    fn tree_sitter_menhir() -> *const ();
}

/// The tree-sitter [`LanguageFn`] for this grammar.
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_menhir) };

/// The content of the [`node-types.json`] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers/6-static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

#[cfg(with_highlights_query)]
/// The syntax highlighting query for this grammar.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");

#[cfg(with_injections_query)]
/// The language injection query for this grammar.
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");

#[cfg(with_locals_query)]
/// The local variable query for this grammar.
pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");

#[cfg(with_tags_query)]
/// The symbol tagging query for this grammar.
pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading Menhir parser");
    }

    // Editors load the queries through these constants, so a query that
    // names a node or field the grammar no longer has must fail here.
    #[test]
    fn test_highlights_query_is_valid() {
        tree_sitter::Query::new(&super::LANGUAGE.into(), super::HIGHLIGHTS_QUERY)
            .expect("Invalid highlights query");
    }

    #[test]
    fn test_injections_query_is_valid() {
        tree_sitter::Query::new(&super::LANGUAGE.into(), super::INJECTIONS_QUERY)
            .expect("Invalid injections query");
    }

    #[test]
    fn test_node_types_matches_grammar() {
        let language: tree_sitter::Language = super::LANGUAGE.into();
        for kind in ["source_file", "new_rule", "ocaml"] {
            assert!(
                super::NODE_TYPES.contains(&format!("\"type\": \"{kind}\"")),
                "node-types.json has no {kind} node"
            );
            assert_ne!(
                language.id_for_node_kind(kind, true),
                0,
                "grammar has no {kind} node"
            );
        }
    }
}
