TOP_DIR=./
COBOL85_TEST_SRC_DIR=$TOP_DIR/test/cobol85/src
COBOL85_TEST_RESULT_SUMMARY=$TOP_DIR/test/cobol85/summary.txt
COBOL85_TEST_RESULT_DIR=$TOP_DIR/test/cobol85/result
TREE_SITTER=$TOP_DIR/node_modules/.bin/tree-sitter

rm -f $COBOL85_TEST_RESULT_SUMMARY
mkdir -p ./test/cobol85/result
rm -f $COBOL85_TEST_RESULT_DIR/*.txt
TEST_TOTAL_COUNTER=0
TEST_SUCCESS_COUNTER=0
TEST_FAIL_COUNTER=0
for file in $(ls $COBOL85_TEST_SRC_DIR/*.CBL | sort); do
 	FILE_NAME=$(basename $file)
    FILE_NAME_BODY=$(basename $file .CBL)
 	$TREE_SITTER parse $file > $COBOL85_TEST_RESULT_DIR/$FILE_NAME_BODY.txt
 	if [ $? = "0" ]; then
        TEST_SUCCESS_COUNTER=$((TEST_SUCCESS_COUNTER+1))
 		echo $(basename $file) OK | tee -a $COBOL85_TEST_RESULT_SUMMARY
 	else
        TEST_FAIL_COUNTER=$((TEST_FAIL_COUNTER+1))
 		echo $(basename $file) NG | tee -a $COBOL85_TEST_RESULT_SUMMARY
 	fi
    TEST_TOTAL_COUNTER=$((TEST_TOTAL_COUNTER+1))
done
echo "${TEST_TOTAL_COUNTER} tests. (Success: ${TEST_SUCCESS_COUNTER}, Fail: ${TEST_FAIL_COUNTER})" | tee -a $COBOL85_TEST_RESULT_SUMMARY

