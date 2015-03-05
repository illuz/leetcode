#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_less2^n.py
# Create Date: 2015-03-05 10:27:16
# Usage:       AC_dfs_less2^n.py 
# Descripton:  


class Solution:
    # @param an integer
    # @return a list of string
    def generateParenthesis(self, n):
        dp = {0: [""], 1: ["()"]}

        def memorial_dfs(n):
            if n not in dp:
                dp[n] = []
                for i in range(n):
                    for inner in memorial_dfs(i):
                        for outter in memorial_dfs(n - i - 1):
                            dp[n].append('(' + inner + ')' + outter)
            return dp[n]

        return memorial_dfs(n)

# debug
s = Solution()
print s.generateParenthesis(3)
