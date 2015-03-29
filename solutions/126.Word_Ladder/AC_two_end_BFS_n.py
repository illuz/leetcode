#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_two_end_BFS_n.py
# Create Date: 2015-03-29 15:10:46
# Usage:       AC_two_end_BFS_n.py 
# Descripton:  


import string
class Solution:
    # @param start, a string
    # @param end, a string
    # @param dict, a set of string
    # @return an integer
    def ladderLength(self, start, end, dict):
        start_set, end_set = set([start]), set([end])

        n = len(start)
        dis = 1
        chars = string.ascii_lowercase

        while start_set and end_set:
            dis += 1
            if len(start_set) < len(end_set):
                start_set, end_set = end_set, start_set
            new_start_set = set()
            for word in start_set:
                for idx in range(n):
                    for c in chars:
                        s = word[:idx] + c + word[idx+1:]
                        if s in end_set:
                            return dis
                        if s in dict:
                            new_start_set.add(s)
                            dict.remove(s)
            start_set = new_start_set
            
        return 0


# debug
s = Solution()
print s.ladderLength("hot", "dog", ["hot","dog"])
