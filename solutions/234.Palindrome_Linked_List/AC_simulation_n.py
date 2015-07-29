#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-07-29 13:39:17
# Usage:       AC_simulation_n.py 
# Descripton:  


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @param {ListNode} head
    # @return {boolean}
    def isPalindrome(self, head):
        cur = head
        sz = 0
        arr = []
        while cur:
            arr.append(cur.val)
            cur = cur.next
            sz += 1

        for i in range(sz // 2):
            if arr[i] != arr[sz - i - 1]:
                return False

        return True
