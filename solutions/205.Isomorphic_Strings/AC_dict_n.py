#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dict_n.py
# Create Date: 2015-05-02 11:47:46
# Usage:       AC_dict_n.py 
# Descripton:  


class Solution:
    # @param {string} s
    # @param {string} t
    # @return {boolean}
    def isIsomorphic(self, s, t):
        return dict(zip(s, t)) == dict(reversed(list(zip(s, t)))) and dict(zip(t, s)) == dict(reversed(list(zip(t, s))))

# debug
s = Solution()
print (s.isIsomorphic('abcde', 'sdfgx'))
