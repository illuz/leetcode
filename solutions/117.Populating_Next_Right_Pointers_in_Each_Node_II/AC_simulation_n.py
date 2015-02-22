#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-02-22 10:37:20
# Usage:       AC_simulation_n.py 
# Descripton:  The same as vesion I


class Solution:
    # @param root, a tree node
    # @return nothing
    def connect(self, root):
        header = TreeNode(0)
        header.next = root
        while header.next:
            cur = header.next
            prev = header
            header.next = None
            while cur:
                if cur.left:
                    prev.next = cur.left
                    prev = prev.next
                if cur.right:
                    prev.next = cur.right
                    prev = prev.next
                cur = cur.next
