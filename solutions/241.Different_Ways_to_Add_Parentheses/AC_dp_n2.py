#!/usr/bin/python3
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_n2.py
# Create Date: 2015-10-23 14:38:55
# Usage:       AC_dp_n2.py
# Descripton:

class Solution(object):
    def diffWaysToCompute(self, input):
        """
        :type input: str
        :rtype: List[int]
        """
        return self.helper(input, {})

    def helper(self, input, seen):
        if input in seen:
            return seen[input]
        if input.isnumeric():
            return [int(input)]
        res = []
        for i, c in enumerate(input):
            if c in '-+*':
                L = self.helper(input[:i], seen)
                R = self.helper(input[i+1:], seen)
                res += [l+r if c == '+' else l-r if c == '-' else l*r
                for l in L
                for r in R]
        seen[input] = res
        return res

s = Solution()
print(s.diffWaysToCompute('2*3+4*5'))
