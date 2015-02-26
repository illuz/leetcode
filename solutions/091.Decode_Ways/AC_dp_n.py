#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_n.py
# Create Date: 2015-02-26 12:44:05
# Usage:       AC_dp_n.py 
# Descripton:  


class Solution:
    # @param s, a string
    # @return an integer
    def numDecodings(self, s):
        if not s:
            return 0
        if len(s) == 1:
            return 1 if s[0] != '0' else 0

        dp = [1, 1 if s[0] != '0' else 0]
        for i in range(2, len(s) + 1):
            rec = 0
            if s[i - 1] != '0':
                rec += dp[(i-1)&1]
            if s[i - 2 : i] <= '26' and s[i - 2] != '0':
                rec += dp[i&1]
            dp[i&1] = rec
        return dp[len(s)&1]

# debug
s = Solution()
print s.numDecodings("12")
