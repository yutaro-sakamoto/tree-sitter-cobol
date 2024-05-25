# tree-sitter-cobol

COBOL85 grammar of [tree-sitter](https://github.com/tree-sitter/tree-sitter)

The syntax rules of tree-sitter-cobol are based on [opensource-cobol](https://github.com/yutaro-sakamoto/opensource-cobol)
and are tested with [NIST COBOL85 test suite](https://www.itl.nist.gov/div897/ctg/cobol_form.htm)

## How to run with latest Nodejs Version(v20.10.0)

```bash
# Change Nodejs Version to latest
nvm use 20

# Remove modules if already generated and package-lock.json file
rm -rf node_modules package-lock.json

npm install

npm rebuild --update-binary
```
