package tree_sitter_cobol_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_cobol "github.com/yutaro-sakamoto/tree-sitter-cobol/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cobol.Language())
	if language == nil {
		t.Errorf("Error loading COBOL grammar")
	}
}
