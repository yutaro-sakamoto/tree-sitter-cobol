all:
	node_modules/.bin/tree-sitter generate
	node_modules/.bin/tree-sitter parse a.cbl

ck:
	cobc -fsyntax-only a.cbl

test:
	node_modules/.bin/tree-sitter test

q:
	node_modules/.bin/tree-sitter query queries/sample.scm sample/a.cbl
