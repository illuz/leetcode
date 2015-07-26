#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-07-26 11:35:19
# Usage:       AC_simulation_n.py 
# Descripton:  


class Solution:
    # @param {integer[]} nums
    # @return {string[]}
    def summaryRanges(self, nums):
        res = []
        if not nums:
            return res

        start = 0
        nums.append(nums[-1])
        for i in range(0, len(nums) - 1):
            if nums[i] + 1 != nums[i + 1]:
                if start == i:
                    res.append(str(nums[i]))
                else:
                    res.append(str(nums[start]) + '->' + str(nums[i]))
                start = i + 1

        nums.pop()
        return res

