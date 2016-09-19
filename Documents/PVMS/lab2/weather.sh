#!/bin/bash
SLEEP_TIME=«`cat sleep.txt`»
exec 2> /dev/null
while [ TRUE ]; do
	curl http://minsk.the.by/ -o RESULT
	awk '/<tr class="tem"/,/tr>/' ./RESULT | grep -o '[+|-][0-9]*' | head -1
	sleep $SLEEP_TIME
done