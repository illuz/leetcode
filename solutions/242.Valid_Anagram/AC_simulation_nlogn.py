#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-08-04 18:33:10
# Usage:       AC_simulation_n.py 
# Descripton:  

class Solution:
    # @param {string} s
    # @param {string} t
    # @return {boolean}
    def isAnagram(self, s, t):
        s = sorted(s)
        t = sorted(t)
        return s == t
            
# test
s = Solution()
print s.isAnagram('abc', 'cba')