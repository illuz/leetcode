#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_sort_nlogn.py
# Create Date: 2015-08-11 20:41:43
# Usage:       AC_sort_nlogn.py 
# Descripton:  


class Solution:
    # @param {integer[]} nums
    # @param {integer} k
    # @return {integer}
    def findKthLargest(self, nums, k):
        return sorted(nums)[-k]
        