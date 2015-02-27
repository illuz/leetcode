#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-02-27 11:38:15
# Usage:       AC_simulation_n.py 
# Descripton:  


class Solution:
    # @return an integer
    def atoi(self, str):
        str = str.strip()
        if not str:
            return 0

        MAX_INT = 2147483647
        MIN_INT = -2147483648
        ret = 0
        overflow = False
        pos = 0
        sign = 1

        if str[pos] == '-':
            pos += 1
            sign = -1
        elif str[pos] == '+':
            pos += 1

        for i in range(pos, len(str)):
            if not str[i].isdigit():
                break
            ret = ret * 10 + int(str[i])
            if not MIN_INT <= sign * ret <= MAX_INT:
                overflow = True
                break

        if overflow:
            return MAX_INT if sign == 1 else MIN_INT
        else:
            return sign * ret

# debug
s = Solution()
print s.atoi('  1324')
