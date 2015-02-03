# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_n!.py
# Create Date: 2015-02-03 11:55:43
# Descripton:   


class Solution:
    def dfs(self, row):
        if row == self.n:
            self.cnt += 1
            return
        for i in range(self.n):
            if self.col[i] != 0 or self.m_diag[row + i] != 0 or self.a_diag[row - i + self.n] != 0:
                continue
            self.col[i] = 1
            self.m_diag[row + i] = 1
            self.a_diag[row - i + self.n] = 1
            self.dfs(row + 1)
            self.col[i] = 0
            self.m_diag[row + i] = 0
            self.a_diag[row - i + self.n] = 0

    # @return a list of lists of string
    def totalNQueens(self, n):
        self.cnt = 0
        self.col = [0] * n
        self.m_diag = [0] * (2 * n)
        self.a_diag = [0] * (2 * n)
        self.n = n
        self.dfs(0)
        return self.cnt



s = Solution()
print s.totalNQueens(4)



