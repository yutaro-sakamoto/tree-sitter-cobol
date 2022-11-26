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

while read LINE
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
    elif [[ "${LINE}" = "${MARK_TITLE_DEORATOR}" ]]; then
        if [[ "${STATE}" = "${STATE_BEFORE_TITLE}" ]]; then
            STATE=${STATE_PARSE_TITLE}
        elif [[ "${STATE}" = "${STATE_PARSE_EXPECTED_RESULT}" ]]; then
            STATE=${STATE_PARSE_TITLE}
            echo "TITLE: ${TITLE}"
            echo "SOURCE: ${SOURCE}"
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
done < corpus/select.txt
echo "TITLE: ${TITLE}"
echo "SOURCE: ${SOURCE}"