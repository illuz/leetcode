# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_record_n.py
# Create Date: 2015-02-02 21:15:02
# Descripton:   


class Solution:
    # @return an integer
    def lengthOfLongestSubstring(self, s):
        res = 0
        left = 0
        d = {}

        for i, ch in enumerate(s):
            if ch in d and d[ch] >= left:
                left = d[ch] + 1
            d[ch] = i
            res = max(res, i - left + 1)
        return res

