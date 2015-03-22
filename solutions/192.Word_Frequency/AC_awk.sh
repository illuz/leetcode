#!/bin/bash
# AC_awk.sh created by illuz at 2015-03-22 17:55:50
# Read from the file words.txt and output the word frequency list to stdout.

awk '
{ for (i=1; i<=NF; i++) { ++S[$i]; } }
END { for (i in S) { print i, S[i] } }
' words.txt | sort -nr -k 2
