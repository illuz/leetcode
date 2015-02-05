# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_1.py
# Create Date: 2015-02-05 09:41:17
# Descripton:   


class Solution:
    # @return a string
    def convertToTitle(self, num):
        ret = []
        while num > 0:
            ret += chr(ord('A') + (num - 1) % 26)
            num = (num - 1) // 26
        ret.reverse()
        return ''.join(ret)

# debug
s = Solution()
print s.convertToTitle(29)

