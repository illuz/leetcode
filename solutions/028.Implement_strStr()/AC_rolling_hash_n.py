#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_rolling_hash_n.py
# Create Date: 2015-03-06 15:02:07
# Usage:       AC_rolling_hash_n.py 
# Descripton:  


class Solution:
    # @param haystack, a string
    # @param needle, a string
    # @return an integer
    def strStr(self, haystack, needle):
        hlen, nlen = len(haystack), len(needle)
        if nlen == 0:
            return 0
        if nlen > hlen or hlen == 0:
            return -1

        rolling = lambda x, y: x * 29 + y
        get_hash = lambda ch: ord(ch) - ord('a')

        nhash = reduce(rolling, map(get_hash, needle))
        hhash = reduce(rolling, map(get_hash, haystack[:nlen]))
        if nhash == hhash:
            return 0

        high_base = 29 ** (nlen - 1)
        for i in range(nlen, hlen):
            hhash -= get_hash(haystack[i - nlen]) * high_base # remove first in hash code
            hhash = rolling(hhash, get_hash(haystack[i]))     # add new
            if nhash == hhash:
                return i - nlen + 1

        return -1


# debug
s = Solution()
print s.strStr('abcd', 'cd')
print s.strStr('', 'a')
print s.strStr('a', '')
print s.strStr('', '')
