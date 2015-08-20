#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_1.py
# Create Date: 2015-08-20 09:32:20
# Usage:       AC_simulation_1.py 
# Descripton:  


class Solution:
    # @param {integer} num
    # @return {boolean}
    def isUgly(self, num):
        if num <= 0:
            return False
        for i in [2, 3, 5]:
            while num % i == 0:
                num /= i
        return num == 1
