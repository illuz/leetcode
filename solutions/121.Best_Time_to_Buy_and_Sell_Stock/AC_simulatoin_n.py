#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulatoin_n.py
# Create Date: 2015-03-12 10:51:45
# Usage:       AC_simulatoin_n.py 
# Descripton:  


class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        if not prices:
            return 0
        buy_price, profit = prices[0], 0
        for price in prices:
            buy_price = min(buy_price, price)
            profit = max(profit, price - buy_price)
        return profit

# debug
s = Solution()
print s.maxProfit([])
