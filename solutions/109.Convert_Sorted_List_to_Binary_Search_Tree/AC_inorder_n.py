#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_inorder_n.py
# Create Date: 2015-03-09 11:35:57
# Usage:       AC_inorder_n.py 
# Descripton:  


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:

    def dfs(self, left, right):
        if left > right:
            return None

        mid = (left + right) // 2
        left_sub_tree = self.dfs(left, mid - 1)  # calc the left tree first

        root = TreeNode(self.head.val)
        self.head = self.head.next

        root.left = left_sub_tree
        root.right = self.dfs(mid + 1, right)
        return root

    # @param head, a list node
    # @return a tree node
    def sortedListToBST(self, head):
        cur = head

        # calc the size
        size = 0
        while cur:
            cur = cur.next
            size += 1

        self.head = head
        return self.dfs(0, size - 1)


# debug
s = Solution()
a = ListNode(1)
print s.sortedListToBST(a)
a.next = ListNode(2)
print s.sortedListToBST(a)
a.next.next = ListNode(3)
print s.sortedListToBST(a)
