#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_set_nlogn.py
# Create Date: 2015-07-13 21:46:54
# Usage:       AC_set_nlogn.py 
# Descripton:  

class Solution:
    def containDuplicate(self, nums):
        return len(set(nums)) != len(nums)

s = Solution()
print(s.containDuplicate([1, 2, 3, 4]))
print(s.containDuplicate([2, 2, 3, 4]))
