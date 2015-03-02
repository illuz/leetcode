#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_1.py
# Create Date: 2015-03-02 23:02:51
# Usage:       AC_simulation_1.py 
# Descripton:  


class Solution:
    # @return a string
    def intToRoman(self, num):
        val = [
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4,
            1
            ]
        syb = [
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV",
            "I"
            ]
        roman = ''
        i = 0
        while  num > 0:
            for _ in range(num // val[i]):
                roman += syb[i]
                num -= val[i]
            i += 1
        return roman
