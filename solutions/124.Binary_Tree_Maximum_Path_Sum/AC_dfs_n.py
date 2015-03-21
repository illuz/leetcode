#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_n.py
# Create Date: 2015-03-21 11:19:40
# Usage:       AC_dfs_n.py 
# Descripton:  


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def dfs(self, root):
        if root is None:
            return 0
        left = max(0, self.dfs(root.left))
        right = max(0, self.dfs(root.right))
        self.ret = max(self.ret, left + right + root.val)
        return max(left, right) + root.val

    # @param root, a tree node
    # @return an integer
    def maxPathSum(self, root):
        self.ret = -(1<<31)

        self.dfs(root)
        return self.ret
    
# debug
s = Solution()
x = TreeNode(0)
print s.maxPathSum(x)
