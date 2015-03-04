#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_stack_dict_n.py
# Create Date: 2015-03-04 19:47:43
# Usage:       AC_stack_dict_n.py 
# Descripton:  


class Solution:
    # @return a boolean
    def isValid(self, s):
        mp = {')': '(', ']': '[', '}': '{'}
        stk = []
        for ch in s:
            if ch in '([{':
                stk.append(ch)
            else:
                if not stk or mp[ch] != stk.pop():
                    return False
        return not stk
