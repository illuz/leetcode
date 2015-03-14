#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_1_space_dp_n.py
# Create Date: 2015-03-13 10:49:50
# Usage:       AC_1_space_dp_n.py 
# Descripton:  


class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        buy1, buy2 = -(1<<31), -(1<<31)
        sell1, sell2 = 0, 0

        for i in prices:
            sell2 = max(sell2, buy2 + i)    # max money after sell 2
            buy2 = max(buy2, sell1 - i)     # max money after buy 2
            sell1 = max(sell1, buy1 + i)    # max money after sell 1
            buy1 = max(buy1, -i)            # max money after buy 1

        return sell2


