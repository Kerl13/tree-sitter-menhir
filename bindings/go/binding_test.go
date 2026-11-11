package tree_sitter_menhir_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_menhir "github.com/tmcgilchrist/tree-sitter-menhir/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_menhir.Language())
	if language == nil {
		t.Errorf("Error loading Menhir grammar")
	}
}
