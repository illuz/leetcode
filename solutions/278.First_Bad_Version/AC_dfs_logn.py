#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_logn.py
# Create Date: 2015-09-24 09:55:34
# Usage:       AC_dfs_logn.py
# Descripton:  https://leetcode.com/problems/first-bad-version/

# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        def find(l, r):
            if l == r:
                return l
            mid = (l + r) // 2
            if isBadVersion(mid):
                return find(l, mid)
            else:
                return find(mid + 1, r)
        return find(1, n)
