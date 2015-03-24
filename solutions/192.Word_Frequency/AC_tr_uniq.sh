#!/bin/bash
# AC_tr_uniq.sh created by illuz at 2015-03-24 09:32:37

cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -rn | awk '{ print $2, $1}'

