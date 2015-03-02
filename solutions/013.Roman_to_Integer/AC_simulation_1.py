#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_1.py
# Create Date: 2015-03-02 23:19:56
# Usage:       AC_simulation_1.py 
# Descripton:  


class Solution:
    # @return an integer
    def romanToInt(self, s):
        val = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        ret = 0
        for i in range(len(s)):
            if i > 0 and val[s[i]] > val[s[i - 1]]:
                ret += val[s[i]] - 2 * val[s[i - 1]]
            else:
                ret += val[s[i]]
        return ret
