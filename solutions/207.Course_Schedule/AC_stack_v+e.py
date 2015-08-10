#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_stack_v+e.py
# Create Date: 2015-08-10 22:23:30
# Usage:       AC_queue_v+e.py 
# Descripton:  

import collections

class Solution:
    # @param {integer} numCourses
    # @param {integer[][]} prerequisites
    # @return {boolean}
    def canFinish(self, numCourses, prerequisites):
        # in order and reverse order
        graph = collections.defaultdict(set)
        rev = collections.defaultdict(set)
        
        for cur, pre in prerequisites:
            graph[cur].add(pre)
            rev[pre].add(cur)
            
        # get the 0 in-order nodes into the stack
        stack = [n for n in range(numCourses) if not graph[n]]
        cnt = 0
        while stack:
            node = stack.pop()
            cnt += 1
            for pre in rev[node]:
                graph[pre].remove(node)
                if not graph[pre]:
                    stack.append(pre)
        
        return cnt == numCourses
        
