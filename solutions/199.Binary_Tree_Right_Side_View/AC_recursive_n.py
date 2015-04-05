#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_recursive_n.py
# Create Date: 2015-04-05 09:22:43
# Usage:       AC_recursive_n.py 
# Descripton:  

# Definition for a binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of integers
    def rightSideView(self, root):
        ret = []
        def dfs(root, deep):
            if root:
                if len(ret) <= deep:
                    ret.append(root.val)
                else:
                    ret[deep] = root.val
                dfs(root.left, deep + 1)
                dfs(root.right, deep + 1)
        dfs(root, 0)
        return ret

# debug
s = Solution()
r = TreeNode(2)
print s.rightSideView(r)
