# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_1.py
# Create Date: 2015-02-05 10:08:01
# Descripton:  Use lambda

class Solution:
    # @param s, a string
    # @return an integer
    def titleToNumber(self, s):
        return reduce(lambda x, y: 26 * x + ord(y) - ord('A') + 1, s, 0)

# debug
s = Solution()
print s.titleToNumber('AA')

