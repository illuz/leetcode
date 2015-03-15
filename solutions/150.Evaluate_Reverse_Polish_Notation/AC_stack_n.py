#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_stack_n.py
# Create Date: 2015-03-15 16:18:08
# Usage:       AC_stack_n.py 
# Descripton:  


class Solution:
    # @param tokens, a list of string
    # @return an integer
    def evalRPN(self, tokens):
        stack = []
        for str in tokens:
            if str not in '+-*/':
                tmp = int(str)
                stack.append(tmp)
            else:
                a = stack.pop()
                b = stack.pop()
                if str == '+': stack.append(b + a)
                elif str == '-': stack.append(b - a)
                elif str == '*': stack.append(b * a)
                elif str == '/': stack.append(int(b * 1.0 / a))
                print b, str, a, stack[-1]
        return stack[0]

s = Solution()
print s.evalRPN(["10","6","9","3","+","-11","*","/","*","17","+","5","+"]) # 22
