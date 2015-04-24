#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_math_1.py
# Create Date: 2015-04-24 22:32:42
# Usage:       AC_math_1.py 
# Descripton:  

import math

class Solution:
    # @param m, an integer
    # @param n, an integer
    # @return an integer
    def rangeBitwiseAnd(self, m, n):
        if m == n:
            return m
        move = int(math.log(n - m) / math.log(2)) + 1
        m >>= move
        n >>= move
        return (n&m) << move

# debug
s = Solution()
print s.rangeBitwiseAnd(5, 7)
