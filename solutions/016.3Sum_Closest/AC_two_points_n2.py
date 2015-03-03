#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_two_points_n2.py
# Create Date: 2015-03-03 19:06:24
# Usage:       AC_two_points_n2.py 
# Descripton:  


class Solution:
    # @return an integer
    def threeSumClosest(self, num, target):
        if not len(num):
            return 0
        ret = num[0] + num[1] + num[2]
        num.sort()
        for i in range(len(num) - 2):
            j = i + 1
            k = len(num) - 1
            while j < k:
                tsum = num[i] + num[j] + num[k]
                if abs(tsum - target) < abs(ret - target):
                    ret = tsum
                if tsum < target:
                    j += 1
                elif tsum > target:
                    k -= 1
                else:
                    j += 1
                    k -= 1
        return ret
        
