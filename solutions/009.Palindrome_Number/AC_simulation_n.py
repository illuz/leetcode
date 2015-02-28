#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-02-28 22:57:39
# Usage:       AC_simulation_n.py 
# Descripton:  


class Solution:
    # @return a boolean
    def isPalindrome(self, x):
        return str(x) == str(x)[::-1]
