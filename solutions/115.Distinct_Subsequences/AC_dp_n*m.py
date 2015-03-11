#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_n*m.py
# Create Date: 2015-03-11 11:35:56
# Usage:       AC_dp_n*m.py 
# Descripton:  


class Solution:
    # @return an integer
    def numDistinct(self, S, T):
        n = len(S)
        m = len(T)
        dp = [[0] * (m + 1), [0] * (m + 1)]
        dp[0][0] = 1
        dp[1][0] = 1
        cur = 0

        for i in xrange(1, n + 1):
            cur = 1 - cur
            for j in xrange(1, m + 1):
                if S[i - 1] == T[j - 1]:
                    dp[cur][j] = dp[1-cur][j] + dp[1-cur][j-1]
                else:
                    dp[cur][j] = dp[1-cur][j]

        return dp[cur][m]

# debug
s = Solution()
print s.numDistinct('ccc', 'c')
print s.numDistinct('', 'a')
print s.numDistinct('rabbbit', 'rabbit')
