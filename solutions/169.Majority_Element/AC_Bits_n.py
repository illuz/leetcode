# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_Bits_n.py
# Create Date: 2015-02-05 11:30:25
# Descripton:   

class Solution:
    # @param num, a list of integers
    # @return an integer
    def majorityElement(self, num):
        res = 0
        for dig in range(32):
            app = 0
            for n in num:
                if (n & (1<<dig)):
                    app += 1
            if app * 2 > len(num):
                res |= (1<<dig)
            # Python will convert int to long
            # see https://oj.leetcode.com/discuss/21854/any-solution-using-python-to-count-bits
            if res & 0x80000000:
                res = -((res^0xffffffff) + 1)
        return res


# debug
s = Solution()
print s.majorityElement([-2147483648])

