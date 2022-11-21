all:
	node_modules/.bin/tree-sitter generate
	node_modules/.bin/tree-sitter parse sample/a.cbl

ck:
	cobc -fsyntax-only sample/a.cbl

test:
	node_modules/.bin/tree-sitter test

q:
	node_modules/.bin/tree-sitter query queries/sample.scm sample/a.cbl

nist:
	sh run_nist_cobol85.sh

.PHONY: nist all q test ck
