#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dp_nm.py
# Create Date: 2015-03-19 09:45:12
# Usage:       AC_dp_nm.py 
# Descripton:  


class Solution:
    # @param s, a string
    # @return a list of lists of string
    def partition(self, s):
        slen = len(s)
        indexes = [[] for _ in range(slen)]
        # pre calculate index
        for i in range(slen):
            for j in range(i, slen):
                if s[i: j + 1] == s[i: j + 1][: : -1]:
                    indexes[i].append(j + 1)

        ret = []
        single = []
        def find_partition(start):
            for end in indexes[start]:
                single.append(s[start: end])

                if end == slen:
                    ret.append(single[:])
                else:
                    find_partition(end)

                single.pop()

        find_partition(0)
        return ret


# debug
s = Solution()
print s.partition('aab')
