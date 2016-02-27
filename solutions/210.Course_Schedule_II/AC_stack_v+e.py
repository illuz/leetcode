#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_stack_v+e.py
# Create Date: 2016-02-25 19:31:07
# Usage:       AC_stack_v+e.py 
# Descripton:  just as the 207

class Solution:
    # @param {integer} numCourses
    # @param {integer[][]} prerequisites
    # @return {boolean}
    def findOrder(self, numCourses, prerequisites):
        # in order and reverse order
        graph = collections.defaultdict(set)
        rev = collections.defaultdict(set)

        for cur, pre in prerequisites:
            graph[cur].add(pre)
            rev[pre].add(cur)

        # get the 0 in-order nodes into the stack
        stack = [n for n in range(numCourses) if not graph[n]]
        path = []
        cnt = 0
        while stack:
            node = stack.pop()
            path.append(node)
            cnt += 1
            for pre in rev[node]:
                graph[pre].remove(node)
                if not graph[pre]:
                    stack.append(pre)
        return path if cnt == numCourses else []
        
