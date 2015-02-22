#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-02-22 10:32:38
# Usage:       AC_simulation_n.py 
# Descripton:  


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
        self.next = None

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

# debug
root = TreeNode(0)
s = Solution()
s.connect(root)

