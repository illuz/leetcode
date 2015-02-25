#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_bitwise_nlogn.py
# Create Date: 2015-02-25 11:34:46
# Usage:       AC_bitwise_nlogn.py 
# Descripton:  


class Solution:
    # @param s, a string
    # @return a list of strings
    def findRepeatedDnaSequences(self, s):
        value = {'A': 0, 'C': 1, 'G': 2, 'T': 3}
        appeared = set()
        used = set()
        ans = []

        if len(s) <= 10:
            return ans

        hash = 0
        for i in range(10):
            hash = (hash << 2) | value[s[i]]
        appeared.add(hash)

        for i in range(10, len(s)):
            hash = ((hash << 2) | value[s[i]]) & ((1<<20) - 1)
            if hash in used:
                continue
            if hash in appeared:
                ans.append(s[i - 9: i + 1])
                used.add(hash)
            else:
                appeared.add(hash)
        return ans

# debug
s = Solution()
print s.findRepeatedDnaSequences('AAAAAAAAAAAA')
