#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_BFS_nsqrtn.py
# Create Date: 2015-10-26 13:25:49

import math

class Solution(object):
    def numSquares(self, n):
        """
        :type n: int
        :rtype: int
        """
        square = [s**2 for s in xrange(1, int(math.sqrt(n))+1)]
        to_check = set()
        to_check.add(n)
        # to_check = [n] 1. MLE

        cnt = 0
        while 0 not in to_check:
            cnt += 1
            # to_check = [x - y for x in to_check for y in square if x >= y] 1. MLE
            # to_check = set([x - y for x in to_check for y in square if x >= y]) 2. TLE
            tmp = set()
            for x in to_check:
                for y in square:
                    if x < y:
                        break
                    tmp.add(x - y)
            to_check = tmp

        return cnt

s = Solution()
print s.numSquares(12)
print s.numSquares(59)
