# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_collections_combinations_2^n.py
# Create Date: 2015-02-08 10:45:15
# Descripton:   

from itertools import *
class Solution:
    # @param S, a list of integer
    # @return a list of lists of integer
    def subsets(self, S):
        S.sort()
        res = []
        for i in xrange(len(S) + 1):
            res += list(list(x) for x in combinations(S, i))
        return res

