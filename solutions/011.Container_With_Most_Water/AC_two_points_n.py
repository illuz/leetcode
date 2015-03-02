#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_two_points_n.py
# Create Date: 2015-03-02 22:48:19
# Usage:       AC_two_points_n.py 
# Descripton:  


class Solution:
    # @return an integer
    def maxArea(self, height):
        lp, rp = 0, len(height) - 1
        area = 0
        while lp < rp:
            area = max(area, min(height[lp], height[rp]) * (rp - lp))
            if height[lp] > height[rp]:
                rp -= 1
            else:
                lp += 1
        return area

# debug
s = Solution()
print s.maxArea([2, 1, 2])
