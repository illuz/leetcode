# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_math_logn.py
# Create Date: 2015-02-05 11:45:02
# Descripton:   

class Solution:
    # @return an integer
    def trailingZeroes(self, n):
        ans = 0
        while n:
            ans += n // 5
            n //= 5
        return ans

# debug
s = Solution()
print s.trailingZeroes(5)

