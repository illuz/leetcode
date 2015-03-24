#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_OrderedDict_n.py
# Create Date: 2015-03-24 12:15:26
# Usage:       AC_OrderedDict_n.py 
# Descripton:  


import collections

class LRUCache:

    # @param capacity, an integer
    def __init__(self, capacity):
        self.capacity = capacity
        self.cache = collections.OrderedDict()

    # @return an integer
    def get(self, key):
        if not key in self.cache:
            return -1
        value = self.cache.pop(key)
        self.cache[key] = value
        return value

    # @param key, an integer
    # @param value, an integer
    # @return nothing
    def set(self, key, value):
        if key in self.cache:
            self.cache.pop(key)
        elif len(self.cache) == self.capacity:
            self.cache.popitem(last=False)
        self.cache[key] = value

# debug
l = LRUCache(2)
l.set(2, 2)
print l.get(2)
l.set(3, 3)
l.set(4, 4)
print l.get(2)
print l.get(3)
