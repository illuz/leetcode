#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_brute_force_nk.py
# Create Date: 2015-08-18 18:49:00
# Usage:       AC_brute_force_nk.py 
# Descripton:  


class Solution:
    # @param {integer[]} nums
    # @param {integer} k
    # @return {integer[]}
    def maxSlidingWindow(self, nums, k):
        res = []
        nums_len = len(nums)
        if nums_len < k or k == 0:
            return res
        for i in xrange(0, nums_len - k + 1):
            res.append(max(nums[i:i+k]))
        return res
                
            

# test
s = Solution()
print s.maxSlidingWindow([1,3,-1,-3,5,3,6,7], 3)