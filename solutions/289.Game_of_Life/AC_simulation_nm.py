#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_nm.py
# Create Date: 2015-10-28 16:30:24

class Solution(object):
    def gameOfLife(self, board):
        """
        :type board: List[List[int]]
        :rtype: void Do not return anything, modify board in-place instead.
        """
        dx = [-1, 0, 1, -1, 1, -1, 0, 1]
        dy = [-1, -1, -1, 0, 0, 1, 1, 1]
        n, m = len(board), len(board[0])
        # compute the result to second last bit
        for i in xrange(n):
            for j in xrange(m):
                neighbors = 0
                for k in xrange(8):
                    x, y = i + dx[k], j + dy[k]
                    if 0 <= x < n and 0 <= y < m and (board[x][y] & 1):
                        neighbors += 1
                if (neighbors == 2 and (board[i][j] & 1)) or (neighbors == 3):
                    board[i][j] |= 2
        # restore the state
        for i in xrange(n):
            for j in xrange(m):
                board[i][j] >>= 1

# test
s = Solution()
b = [[1, 1, 1], [1, 1, 1], [1, 1, 1]]
s.gameOfLife(b)
print(b)
