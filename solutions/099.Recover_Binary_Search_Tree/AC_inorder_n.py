#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_inorder_n.py
# Create Date: 2015-03-08 23:12:15
# Usage:       AC_inorder_n.py 
# Descripton:  cost O(n) sapce


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return a tree node
    def recoverTree(self, root):
        order_table = []

        def inorder(root):
            if root:
                inorder(root.left)
                order_table.append(root)
                inorder(root.right)

        inorder(root)
        first = None
        for i in xrange(len(order_table)):
            if order_table[i].val > order_table[i + 1].val:
                first = order_table[i]
                break
        for i in xrange(len(order_table) - 1, 0, -1):
            if order_table[i].val < order_table[i - 1].val:
                first.val, order_table[i].val = order_table[i].val, first.val
                return


s = Solution()
a = TreeNode(2)
a.right = TreeNode(1)
print s.recoverTree(a)
