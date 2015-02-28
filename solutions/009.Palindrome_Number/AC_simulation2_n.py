#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation2_n.py
# Create Date: 2015-02-28 22:51:48
# Usage:       AC_simulation2_n.py 
# Descripton:  


class Solution:
    # @return a boolean
    def isPalindrome(self, x):
        xx = x
        new_xx = 0
        while xx > 0:
            new_xx = new_xx * 10 + xx % 10
            xx /= 10

        return new_xx == x
