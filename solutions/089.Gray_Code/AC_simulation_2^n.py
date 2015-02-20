#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_2^n.py
# Create Date: 2015-02-20 10:21:11
# Usage:       AC_simulation_2^n.py 
# Descripton:  

class Solution:
    # @return a list of integers
    def grayCode(self, n):
        return map(lambda x: x^(x>>1), xrange(1<<n))
        
# debug
s = Solution()
print s.grayCode(3)
