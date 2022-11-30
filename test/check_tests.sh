#!/bin/bash
MARK_START_S_EXPRESSION='---'
MARK_TITLE_DECORATER="===================================="

STATE_BEFORE_TITLE=0
STATE_PARSE_TITLE=1
STATE_PARSE_SOURCE_CODE=2
STATE_PARSE_EXPECTED_RESULT=3

STATE=${STATE_BEFORE_TITLE}
TITLE=""
SOURCE=""
RETURN_CODE=0

for filename in corpus/*.txt
do
    while IFS=""; read LINE
    do
        if [[ "${LINE}" =~ "[ \n\r\t]*" ]]; then
            if [[ "${STATE}" == "${STATE_BEFORE_TITLE}" ]]; then
                continue
            elif [[ "${STATE}" == "${STATE_PARSE_TITLE}" ]]; then
                TITLE="${TITLE}
${LINE}"
            elif [[ "${STATE}" == "${STATE_PARSE_TITLE}" ]]; then
                SOURCE="${SOURCE}
${LINE}"
            fi
        elif [[ "${LINE}" = "${MARK_TITLE_DECORATER}" ]]; then
            if [[ "${STATE}" = "${STATE_BEFORE_TITLE}" ]]; then
                STATE=${STATE_PARSE_TITLE}
            elif [[ "${STATE}" = "${STATE_PARSE_EXPECTED_RESULT}" ]]; then
                # Trim the title
                TITLE=$(echo ${TITLE} | xargs)
                # Check syntax check
                STATE=${STATE_PARSE_TITLE}
                TEMP_COBOL_FILE_NAME=$(mktemp XXXXXXXXXX.cbl)
                echo ${SOURCE} > ${TEMP_COBOL_FILE_NAME}
                cobc -fsyntax-only ${TEMP_COBOL_FILE_NAME} 2> /dev/null
                case $? in
                    0) ;;
                    *) {
                        echo "test case '${TITLE}' is invalid"
                        RETURN_CODE=1
                    };;
                esac
                rm ${TEMP_COBOL_FILE_NAME}
                TITLE=""
                SOURCE=""
            elif [[ "${STATE}" = "${STATE_PARSE_TITLE}" ]]; then
                STATE=${STATE_PARSE_SOURCE_CODE}
            else
                echo "parse error!"
            fi
        elif [[ "${LINE}" = "${MARK_START_S_EXPRESSION}" ]]; then
            STATE=${STATE_PARSE_EXPECTED_RESULT}
        elif [[ "${STATE}" = "${STATE_PARSE_TITLE}" ]]; then
            TITLE="${TITLE}
${LINE}"
        elif [[ "${STATE}" = "${STATE_PARSE_SOURCE_CODE}" ]]; then
            SOURCE="${SOURCE}
${LINE}"
        fi
    done < $filename
done

exit $RETURN_CODE