#!/bin/bash
# AC_sed.sh created by illuz at 2015-03-25 12:49:25
# Read from the file file.txt and output all valid phone numbers to stdout.
sed -n -e '/^\(\([0-9]\{3\}-\)\|\(([0-9]\{3\}) \)\)[0-9]\{3\}-[0-9]\{4\}$/ p' file.txt
