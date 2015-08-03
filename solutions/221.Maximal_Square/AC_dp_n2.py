#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_n2.py
# Create Date: 2015-08-03 18:55:06
# Usage:       AC_dp_n2.py 
# Descripton:  


class Solution:
    # @param {character[][]} matrix
    # @return {integer}
    def maximalSquare(self, matrix):
        if len(matrix) == 0 or len(matrix[0]) == 0:
            return 0
        res = 0
        n, m = len(matrix), len(matrix[0])
        print n, m
        
        dp = [ [0] * (m + 1) ] * (n + 1)
        for i in xrange(1, n + 1):
            for j in xrange(1, m + 1):
                if matrix[i - 1][j - 1] == '1':
                    dp[i][j] = min(dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]) + 1
                    res = max(dp[i][j], res)
        
        return res * res
        
# test
s = Solution()
print s.maximalSquare([['1'],['0']])