# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dfs_2^n.py
# Create Date: 2015-02-07 19:10:02
# Descripton:   

class Solution:
    def dfs(self, dep, S):
        if dep == len(S):
            self.res.append(self.cur[:])
        else:
            self.dfs(dep + 1, S)
            self.cur.append(S[dep])
            self.dfs(dep + 1, S)
            self.cur.pop()

    # @param S, a list of integer
    # @return a list of lists of integer
    def subsets(self, S):
        S.sort()
        self.res = []
        self.cur = []
        self.dfs(0, S)
        return self.res

# debug
s = Solution()
print s.subsets([1, 2, 3])

