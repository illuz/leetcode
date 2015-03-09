#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_n.py
# Create Date: 2015-03-09 09:34:44
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
    # @return a list of lists of integers
    def levelOrderBottom(self, root):
        ret = []
        def dfs(root, level):
            if root:
                if level >= len(ret):
                    ret.append([])
                ret[level].append(root.val)
                dfs(root.left, level + 1)
                dfs(root.right, level + 1)

        dfs(root, 0)
        ret.reverse()
        return ret

