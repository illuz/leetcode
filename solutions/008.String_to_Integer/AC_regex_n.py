#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_regex_n.py
# Create Date: 2015-02-27 11:41:25
# Usage:       AC_regex_n.py 
# Descripton:  


import re

class Solution:
    # @return an integer
    def atoi(self, str):
        str = str.strip()
        str = re.match(r'^[+-]?\d+', str).group()
        MAX_INT = 2147483647
        MIN_INT = -2147483648

        try:
            ret = int(str)
            if ret > MAX_INT:
                return MAX_INT
            elif ret < MIN_INT:
                return MIN_INT
            else:
                return ret
        except:
            return 0


# debug
s = Solution()
print s.atoi('  1324sdf')
