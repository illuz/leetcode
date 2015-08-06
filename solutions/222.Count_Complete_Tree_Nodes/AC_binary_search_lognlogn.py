#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_binary_search_lognlogn.py
# Create Date: 2015-08-07 00:01:49
# Usage:       AC_binary_search_lognlogn.py 
# Descripton:  

class Solution:
    # @param {TreeNode} root
    # @return {integer}
    def countNodes(self, root):
        if not root:
            return 0
        leftDepth = self.getDepth(root.left)
        rightDepth = self.getDepth(root.right)
        if leftDepth == rightDepth:
            return (1<<leftDepth) + self.countNodes(root.right)
        else:
            return (1<<rightDepth) + self.countNodes(root.left)

    def getDepth(self, root):
        if not root:
            return 0
        return 1 + self.getDepth(root.left)


