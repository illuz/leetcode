# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_n!.py
# Create Date: 2015-02-03 11:50:39
# Descripton:   

class Solution:
    def dfs(self, row):
        if row == self.n:
            self.res.append(self.cur[:])
            return
        for i in range(self.n):
            if self.col[i] != 0 or self.m_diag[row + i] != 0 or self.a_diag[row - i + self.n] != 0:
                continue
            self.col[i] = 1
            self.m_diag[row + i] = 1
            self.a_diag[row - i + self.n] = 1
            # So sad that str don't support item assignment in python
            self.cur[row] = self.cur[row][:i] + 'Q' + self.cur[row][i + 1:]
            self.dfs(row + 1)
            self.cur[row] = self.cur[row][:i] + '.' + self.cur[row][i + 1:]
            self.col[i] = 0
            self.m_diag[row + i] = 0
            self.a_diag[row - i + self.n] = 0

    # @return a list of lists of string
    def solveNQueens(self, n):
        self.res = []
        self.cur = ['.' * n] * n
        self.col = [0] * n
        self.m_diag = [0] * (2 * n)
        self.a_diag = [0] * (2 * n)
        self.n = n
        self.dfs(0)
        return self.res



s = Solution()
print s.solveNQueens(4)

