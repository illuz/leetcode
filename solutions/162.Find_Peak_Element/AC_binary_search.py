#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_binary_search.py
# Create Date: 2015-02-14 09:42:56
# Usage:       AC_binary_search.py 
# Descripton:  


class Solution:
    def findPeakInRange(self, num, lhs, rhs):
        mid = (lhs + rhs) // 2
        if (mid == lhs or num[mid] > num[mid - 1]) and \
            (mid == rhs or num[mid] > num[mid + 1]):
            return mid
        if num[mid] < num[mid + 1]:
            return self.findPeakInRange(num, mid + 1, rhs)
        else:
            return self.findPeakInRange(num, lhs, mid)
    # @param num, a list of integer
    # @return an integer
    def findPeakElement(self, num):
        return self.findPeakInRange(num, 0, len(num) - 1)


# debug
s = Solution()
print s.findPeakElement([1, 2, 3, 1])
