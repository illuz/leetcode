#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_stack_n.py
# Create Date: 2015-03-16 10:19:51
# Usage:       AC_stack_n.py 
# Descripton:  


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class BSTIterator:
    # @param root, a binary search tree's root node
    def __init__(self, root):
        self.stack = []
        while root:
            self.stack.append(root)
            root = root.left

    # @return a boolean, whether we have a next smallest number
    def hasNext(self):
        return len(self.stack) != 0

    # @return an integer, the next smallest number
    def next(self):
        top = self.stack.pop()
        right = top.right
        while right:
            self.stack.append(right)
            right = right.left
        return top.val

# debug
root = TreeNode(0)
i, v = BSTIterator(root), []
while i.hasNext(): v.append(i.next())
