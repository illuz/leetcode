#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_one_line_n.py
# Create Date: 2015-03-16 10:42:01
# Usage:       AC_one_line_n.py 
# Descripton:  

class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        return int(bin(n)[2:].zfill(32)[::-1], 2)

# debug
s = Solution()
print s.reverseBits(25235)
