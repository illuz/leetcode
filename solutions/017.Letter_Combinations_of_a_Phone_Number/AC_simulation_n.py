#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-03-04 15:08:29
# Usage:       AC_simulation_n.py 
# Descripton:  


class Solution:
    # @return a list of strings, [s1, s2]
    def letterCombinations(self, digits):
        alpha = [" ", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
        res = []
        word = []
        def dfs(cur):
            if cur >= len(digits):
                res.append(''.join(word))
            else:
                for x in alpha[(int)(digits[cur]) - (int)('0')]:
                    word.append(x)
                    dfs(cur + 1)
                    word.pop()
        dfs(0)
        return res

# debug
s = Solution()
print s.letterCombinations('23')
a = ['a', 'b', 'c']
