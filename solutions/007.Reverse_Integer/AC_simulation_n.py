#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-02-27 10:03:36
# Usage:       AC_simulation_n.py 
# Descripton:  


import math

class Solution:
    # @return an integer
    def reverse(self, x):
        revx = int(str(abs(x))[::-1])
        if revx > math.pow(2, 31):
            return 0
        else:
            return revx * cmp(x, 0)

# debug
s = Solution()
print s.reverse(1234)

