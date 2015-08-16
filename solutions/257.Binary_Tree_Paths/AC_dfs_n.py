#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_n.py
# Create Date: 2015-08-16 10:15:54
# Usage:       AC_dfs_n.py 
# Descripton:  


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param {TreeNode} root
    # @return {string[]}
    def binaryTreePaths(self, root):
        path =[]
        paths = []
        def dfs(root):
            if root:
                path.append(str(root.val))
                if root.left == None and root.right == None:
                    paths.append('->'.join(path))
                dfs(root.left)
                dfs(root.right)
                path.pop()
        dfs(root)
        return paths
            