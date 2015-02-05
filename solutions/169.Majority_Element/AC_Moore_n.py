# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_Moore_n.py
# Create Date: 2015-02-05 10:48:49
# Descripton:   

class Solution:
    # @param num, a list of integers
    # @return an integer
    def majorityElement(self, num):
        cnt = 0
        for i in num:
            if cnt == 0:
                ret = i
            cnt += 1 if ret == i else -1
        return ret

# debug
s = Solution()
print s.majorityElement([1, 2, 2, 2, 3])

