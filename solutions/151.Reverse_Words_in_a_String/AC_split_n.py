#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_split_n.py
# Create Date: 2015-03-18 21:49:19
# Usage:       AC_split_n.py 
# Descripton:  


class Solution:
    # @param s, a string
    # @return a string
    def reverseWords(self, s):
        return ' '.join(list(reversed(s.split())))
