#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_two_point_n.py
# Create Date: 2015-03-04 19:16:10
# Usage:       AC_two_point_n.py 
# Descripton:  


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @return a ListNode
    def removeNthFromEnd(self, head, n):
        dummy = ListNode(0)
        dummy.next = head
        p, q = dummy, dummy
        
        # first 'q' go n step
        for i in range(n):
            q = q.next

        # q & p
        while q.next:
            p = p.next
            q = q.next

        rec = p.next
        p.next = rec.next
        del rec
        return dummy.next

