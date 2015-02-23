#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_DFA_n.py
# Create Date: 2015-02-23 20:15:11
# Usage:       AC_DFA_n.py 
# Descripton:  


class Solution:
    # @param s, a string
    # @return a boolean
    def isNumber(self, s):
        INVALID, SPACE, SIGN, DIGIT, DOT, EXP, NUM = range(7)
        table = [
            [-1, 0, 3, 1, 2,-1], # 0. start
            [-1, 8,-1, 1, 4, 5], # 1. number before dot
            [-1,-1,-1, 4,-1,-1], # 2. dot
            [-1,-1,-1, 1, 2,-1], # 3. sign
            [-1, 8,-1, 4,-1, 5], # 4. number after dot
            [-1,-1, 6, 7,-1,-1], # 5. exp
            [-1,-1,-1, 7,-1,-1], # 6. sign after exp
            [-1, 8,-1, 7,-1,-1], # 7. number after exp
            [-1, 8,-1,-1,-1,-1], # 8. valid end
            ]

        state = 0
        for ch in s:
            inputType = INVALID
            if ch in '\n\t ':
                inputType = SPACE
            elif ch in '+-':
                inputType = SIGN
            elif ch in '0123456789':
                inputType = DIGIT
            elif ch == '.':
                inputType = DOT
            elif ch in 'eE':
                inputType = EXP
            state = table[state][inputType]
            if state == -1:
                return False
        return table[state][SPACE] == 8


# debug
s = Solution()
print s.isNumber(' +33.4e8')
