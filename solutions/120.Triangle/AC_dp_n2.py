#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_n2.py
# Create Date: 2015-02-25 12:48:55
# Usage:       AC_dp_n2.py 
# Descripton:  


class Solution:
    # @param triangle, a list of lists of integers
    # @return an integer
    def minimumTotal(self, triangle):
        dp = [1000000] * (len(triangle) + 1)
        dp[1] = triangle[0][0]
        for i in range(1, len(triangle)):
            for j in range(i + 1, 0, -1):
                dp[j] = min(dp[j - 1], dp[j]) + triangle[i][j - 1]
        return min(dp)

# debug
s = Solution()
print s.minimumTotal([[1],[2,3]])
