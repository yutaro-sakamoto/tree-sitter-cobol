all:
	node_modules/.bin/tree-sitter generate

ck:
	cobc -fsyntax-only sample/a.cbl

test:
	node_modules/.bin/tree-sitter test

t:
	node_modules/.bin/tree-sitter parse a.cbl
q:
	node_modules/.bin/tree-sitter query queries/sample.scm sample/a.cbl

nist:
	sh run_nist_cobol85.sh

.PHONY: nist all q test ck
