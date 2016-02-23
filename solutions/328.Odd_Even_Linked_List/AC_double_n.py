#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_double_n.py
# Create Date: 2016-02-23 19:16:07
# Usage:       AC_simulation_n.py 
# Descripton:  


# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def oddEvenList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head:
            return head
        evenhead = head.next
        odd, even = head, evenhead
        while even and even.next:
            odd.next = odd.next.next
            even.next = even.next.next
            odd, even = odd.next, even.next
        odd.next = evenhead
        return head
