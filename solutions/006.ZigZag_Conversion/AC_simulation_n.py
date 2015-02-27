#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-02-27 00:40:10
# Usage:       AC_simulation_n.py 
# Descripton:  


class Solution:
    # @return a string
    def convert(self, s, nRows):
        if nRows == 1:
            return s
        step = nRows * 2 - 2
        # first row
        ret = s[::step]
        for i in range(1, nRows - 1):
            for j in range(i, len(s), step):
                ret += s[j]
                if j + (step - i * 2) < len(s):
                    ret += s[j + (step - i * 2)]
        # last row
        ret += s[nRows - 1::step]
        return ret

# debug
s = Solution()
print s.convert("PAYPALISHIRING", 3)
