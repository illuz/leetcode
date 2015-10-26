#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        MLE_dp_nsqrtn.py
# Create Date: 2015-10-26 11:03:22

import math

class Solution(object):
    def helper(self, n):
        if self.result[n] != 0:
            return self.result[n]
        if n in self.square:
            return 1
        self.result[n] = min(1 + self.helper(n - sqr) for sqr in self.square if sqr <= n)
        return self.result[n]

    def numSquares(self, n):
        """
        :type n: int
        :rtype: int
        """
        self.result = [0 for _ in xrange(n + 1)]
        self.square = [s**2 for s in xrange(1, int(math.sqrt(n))+1)]

        return self.helper(n)

s = Solution()
print(s.numSquares(12))
print(s.numSquares(13))
print(s.numSquares(7168))
