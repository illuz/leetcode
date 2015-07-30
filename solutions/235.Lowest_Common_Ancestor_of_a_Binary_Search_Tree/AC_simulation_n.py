#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-07-29 20:57:10
# Usage:       AC_simulation_n.py 
# Descripton:  


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param {TreeNode} root
    # @param {TreeNode} p
    # @param {TreeNode} q
    # @return {TreeNode}
    def lowestCommonAncestor(self, root, p, q):
        if p.val > q.val:
            p, q = q, p
        cur = root
        while p.val > cur.val or q.val < cur.val:
            if p.val > cur.val:
                cur = cur.right
            else:
                cur = cur.left
        return cur
        