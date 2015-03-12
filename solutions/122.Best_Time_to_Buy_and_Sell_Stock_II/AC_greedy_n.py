#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_greedy_n.py
# Create Date: 2015-03-12 11:14:05
# Usage:       AC_greedy_n.py 
# Descripton:  


class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        return sum(y - x for x, y in zip(prices[:-1], prices[1:]) if x < y)

# debug
s = Solution()
print s.maxProfit([1, 3, 4])

