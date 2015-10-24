#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_map_nlogn.py
# Create Date: 2015-10-24 23:02:14
# Usage:       AC_map_nlogn.py
# Descripton:

class Solution(object):
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        mp = ["" for _ in xrange(26)]
        strs = str.split()
        if len(strs) != len(pattern):
            return False
        for i, c in enumerate(pattern):
            idx = ord(c) - ord('a')
            if mp[idx] == "":
                for v in mp:
                    if v == strs[i]:
                        return False
                mp[idx] = strs[i]
            else:
                if mp[idx] != strs[i]:
                    return False
        return True

s = Solution()
print(s.wordPattern("abba", "d c c d"))
