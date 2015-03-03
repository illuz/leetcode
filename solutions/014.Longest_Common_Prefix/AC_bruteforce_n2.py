#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_bruteforce_n2.py
# Create Date: 2015-03-03 15:14:14
# Usage:       AC_bruteforce_n2.py 
# Descripton:  


class Solution:
    # @return a string
    def longestCommonPrefix(self, strs):
        if strs == []:
            return ''
        for i in range(len(strs[0])):
            for str in strs:
                if len(str) <= i or str[i] != strs[0][i]:
                    return strs[0][:i]
        return strs[0]

# debug
s = Solution()
print s.longestCommonPrefix(["aa","a"])
