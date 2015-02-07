# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_Newton_logn.py
# Create Date: 2015-02-06 23:33:33
# Descripton:   

class Solution:
    # @param x, an integer
    # @return an integer
    def sqrt(self, x):
        if x == 0:
            return 0
        lasty, y = 0.0, 1.0
        while y != lasty:
            lasty = y
            y = (y + x / y) / 2.0
        return int(y)

s = Solution()
print s.sqrt(3)

