#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_fractional_1.py
# Create Date: 2015-03-07 16:05:51
# Usage:       AC_fractional_1.py 
# Descripton:  


class Solution:
    # @param num, a list of integer
    # @return nothing (void), do not return anything, modify num in-place instead.
    def nextPermutation(self, num):
        if not len(num):
            return

        idx = len(num) - 2

        # 1. find out the last wrong order
        while idx >= 0 and num[idx] >= num[idx + 1]:
            idx -= 1

        # 2. swap
        if idx >= 0:
            i = idx + 1
            while i < len(num) and num[i] > num[idx]:
                i += 1
            num[i - 1], num[idx] = num[idx], num[i - 1]

        # 3. reverse
        left, right = idx + 1, len(num) - 1
        while left <= right:
            num[left], num[right] = num[right], num[left]
            left += 1
            right -= 1

# debug
s = Solution()
inp = [1, 2, 4, 3]
s.nextPermutation(inp)
print inp

inp = [1, 3, 2, 3]
s.nextPermutation(inp)
print inp
s.nextPermutation(inp)
print inp
