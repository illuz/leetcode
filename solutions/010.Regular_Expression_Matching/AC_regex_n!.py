#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_regex_n!.py
# Create Date: 2015-03-02 09:50:01
# Usage:       AC_regex_n!.py 
# Descripton:  


import re

class Solution:
    # @return a boolean
    def isMatch(self, s, p):
        return re.match('^' + p + '$', s) != None

# debug
s = Solution()
print s.isMatch("aa", "a*")

