#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_mod_1.py
# Create Date: 2015-08-17 00:44:30
# Usage:       AC_mod_1.py 
# Descripton:  


class Solution:
    # @param {integer} num
    # @return {integer}
    def addDigits(self, num):
        return num % 9 or num and 9