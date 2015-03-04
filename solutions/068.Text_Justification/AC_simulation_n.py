#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-03-04 14:32:16
# Usage:       AC_simulation_n.py 
# Descripton:  

class Solution:
    # @param words, a list of strings
    # @param L, an integer
    # @return a list of strings
    def fullJustify(self, words, L):
        def get_one_line(start, end, rest):
            line = words[start][:]
            rest += (end - start)
            even_space = rest + 1
            num_of_more = 0

            if start != end:
                even_space = rest / (end - start)
                num_of_more = rest - even_space * (end - start)

            for i in range(start + 1, end + 1):
                line += ' ' * even_space
                if i - start <= num_of_more:
                    line += ' '
                line += words[i]
            if len(line) < L:
                line += ' ' * (L - len(line))
            return line

        ret = []
        cur_len = 0
        start_pos = 0
        for i in range(len(words)):
            if cur_len + len(words[i]) > L:
                ret.append(get_one_line(start_pos, i - 1, L - cur_len + 1))
                start_pos = i
                cur_len = 0
            cur_len += len(words[i])
            cur_len += 1
        ret.append(get_one_line(start_pos, len(words) - 1, 0))
        return ret

# debug
s = Solution()
print s.fullJustify(["This", "is", "an", "example", "of", "text", "justification."], 16)

