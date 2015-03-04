#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_hash_two_sum_n2logn.py
# Create Date: 2015-03-04 17:54:25
# Usage:       AC_hash_two_sum_n2logn.py 
# Descripton:  


import collections
import itertools
class Solution:
    # @return a list of lists of length 4, [[val1,val2,val3,val4]]
    def fourSum(self, num, target):
        two_sum = collections.defaultdict(list)
        ret = set()
        for (id1, val1), (id2, val2) in itertools.combinations(enumerate(num), 2):
            two_sum[val1 + val2].append({id1, id2})
        keys = two_sum.keys()
        for key in keys:
            if two_sum[key] and two_sum[target - key]:
                for pair1 in two_sum[key]:
                    for pair2 in two_sum[target - key]:
                        if pair1.isdisjoint(pair2):
                            ret.add(tuple(sorted([num[i] for i in pair1 | pair2])))
                del two_sum[key]
                if key != target - key:
                    del two_sum[target - key]
        return [list(i) for i in ret]


# debug
s = Solution()
print s.fourSum([2,1,0,-1], 2)
