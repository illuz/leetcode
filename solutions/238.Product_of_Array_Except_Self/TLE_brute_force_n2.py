#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        TLE_brute_force_n2.py
# Create Date: 2016-02-24 19:09:56
# Usage:       AC_brute_force_n.py 
# Descripton:  


class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        return [reduce(lambda x, y: x * y, nums[:i] + nums[i+1:]) for i in range(len(nums))]

s = Solution()
print(s.productExceptSelf([1, 2, 3, 4]))
