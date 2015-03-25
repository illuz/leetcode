#!/bin/bash
# AC_egrep.sh created by illuz at 2015-03-25 13:05:10

egrep -o '^(([0-9]{3}-)|(\([0-9]{3}\) ))[0-9]{3}-[0-9]{4}$' file.txt
