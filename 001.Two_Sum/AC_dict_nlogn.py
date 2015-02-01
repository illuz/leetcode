# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_dict_nlogn.py
# Create Date: 2015-02-01 23:03:27
# Descripton:  Using dict

class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        dictMap = {}
        for index, value in enumerate(num):
            if target - value in dictMap:
                return dictMap[target - value] + 1, index + 1
            dictMap[value] = index


# debug
s = Solution()
print s.twoSum([1, 2, 3, 4], 4)

