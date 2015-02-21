#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_n.py
# Create Date: 2015-02-21 09:05:37
# Usage:       AC_dfs_n.py 
# Descripton:  


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def dfs(self, root, sum):
        if root == None:
            return
        self.path.append(root.val)
        sum -= root.val
        if root.left == None and root.right == None:
            if sum == 0:
                self.res.append(self.path[:])
        else:
            if root.left:
                self.dfs(root.left, sum)
            if root.right:
                self.dfs(root.right, sum)
        self.path.pop()

    # @param root, a tree node
    # @param sum, an integer
    # @return a list of lists of integers
    def pathSum(self, root, sum):
        self.res = []
        self.path = []
        self.dfs(root, sum)
        return self.res


# debug
root = TreeNode(1)
sum = 1
s  = Solution()
print s.pathSum(root, sum)
