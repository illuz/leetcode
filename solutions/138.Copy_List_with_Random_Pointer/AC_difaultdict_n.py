#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_difaultdict_n.py
# Create Date: 2015-03-28 11:16:27
# Usage:       AC_difaultdict_n.py 
# Descripton:  


import collections
# Definition for singly-linked list with a random pointer.
class RandomListNode:
    def __init__(self, x):
        self.label = x
        self.next = None
        self.random = None

class Solution:
    # @param head, a RandomListNode
    # @return a RandomListNode
    def copyRandomList(self, head):
        d = collections.defaultdict(lambda: RandomListNode(0))
        if head is None:
            return None
        cur = head
        while cur:
            d[cur].label = cur.label
            d[cur].next = d[cur.label]
            d[cur].random = d[cur.random]
            cur = cur.next
        return d[head]
