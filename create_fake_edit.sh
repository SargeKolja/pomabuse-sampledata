#!/bin/bash

if [ -n "${1}" ]; then
	echo "// faked edit in file ${1}: $(echo "${RANDOM}" | md5sum.exe | base64), just to simulate a code change" >> ${1}
else
	echo "// faked edit in file ${1}: $(echo "${RANDOM}" | md5sum.exe | base64), just to simulate a code change"
fi
