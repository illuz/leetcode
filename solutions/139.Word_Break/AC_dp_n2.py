#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_n2.py
# Create Date: 2015-04-21 10:21:18
# Usage:       AC_dp_n2.py 
# Descripton:  


class Solution:
    # @param s, a string
    # @param dict, a set of string
    # @return a boolean
    def wordBreak(self, s, dict):
        n = len(s)
        dp = [False] * (n + 1)
        dp[0] = True
        for i in range(n):
            if dp[i]:
                for word in dict:
                    j = len(word)
                    if i + j <= n and s[i: i + j] == word:
                        dp[i + j] = True
        return dp[n]

# debug
s = Solution()
print s.wordBreak('a', ['a'])
