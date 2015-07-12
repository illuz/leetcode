#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_bitwize_1.py
# Create Date: 2015-07-12 20:02:44
# Usage:       AC_bitwize_1.py 
# Descripton:  

class Solution:
    def isPowerOfTwo(self, n):
        return (n > 0) and (n & (n-1)) == 0
