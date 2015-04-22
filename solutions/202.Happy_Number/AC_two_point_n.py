#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_two_point_n.py
# Create Date: 2015-04-22 17:56:59
# Usage:       AC_two_point_n.py 
# Descripton:  

class Solution:
    # @param {integer} n
    # @return {boolean}
    def isHappy(self, n):

        # define process function
        def proc(x):
            s = 0
            while x:
                s += (x % 10) ** 2
                x /= 10
            return s

        # loop
        a = proc(n)
        b = proc(a)
        while a != 1 and a != b:
            a = proc(a)
            b = proc(b)
            b = proc(b)

        return 1 == a

# debug
s = Solution()
print s.isHappy(19)
