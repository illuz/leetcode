#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_n^4.py
# Create Date: 2015-03-08 19:43:42
# Usage:       AC_dp_n^4.py 
# Descripton:  


class Solution:
    # @return a boolean
    def isScramble(self, s1, s2):
        if len(s1) != len(s2):
            return False
        if not len(s1):
            return True

        sz = len(s1)
        dp = [[[False] * sz for _ in xrange(sz)] for _ in xrange(sz)]

        for wd in xrange(0, sz): # the width of substring
            for i in xrange(sz - wd): # start position of s1
                for j in xrange(sz - wd): # start position of s2

                    if wd == 0:
                        dp[i][j][wd] = (s1[i] == s2[j])
                    else:
                        for cut in xrange(0, wd):
                            if dp[i][j][cut] and dp[i + cut + 1][j + cut + 1][wd - cut - 1]:
                                dp[i][j][wd] = True
                                break
                            if dp[i][j + wd - cut][cut] and dp[i + cut + 1][j][wd - cut - 1]:
                                dp[i][j][wd] = True
                                break
        return dp[0][0][sz - 1]

# debug
s = Solution()
print s.isScramble('abb', 'bba')   

