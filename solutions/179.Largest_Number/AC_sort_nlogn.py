#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_sort_nlogn.py
# Create Date: 2015-02-26 10:33:39
# Usage:       AC_sort_nlogn.py 
# Descripton:  


class Solution:
    # @param num, a list of integers
    # @return a string
    def largestNumber(self, num):
        comp = lambda a, b: -1 if a + b > b + a else 1 if a + b < b + a else 0
        return str(int("".join(sorted(map(str, num), comp))))

# debug
s = Solution()
print s.largestNumber([0, 0, 5])
