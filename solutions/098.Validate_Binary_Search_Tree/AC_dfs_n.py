#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_n.py
# Create Date: 2015-03-03 14:53:53
# Usage:       AC_dfs_n.py 
# Descripton:  


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return a boolean
    def isValidBST(self, root):

        def dfs(root, minval, maxval):
            if root is None:
                return True
            return minval < root.val < maxval and dfs(root.left, minval, root.val) and dfs(root.right, root.val, maxval)

        return dfs(root, -1<<32, 1<<32)
