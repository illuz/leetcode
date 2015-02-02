# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_two_points_nlogn.py
# Create Date: 2015-02-01 23:14:04
# Descripton:  two points 

class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        # sort
        sorted_num = sorted(num)

        # two points
        left = 0
        right = len(num) - 1
        res = []
        while (left < right):
            sum = sorted_num[left] + sorted_num[right]
            if sum == target:
                # find out index
                break;
            elif sum > target:
                right -= 1
            else:
                left += 1

        if left == right:
            return -1, -1
        else:
            pos1 = num.index(sorted_num[left]) + 1
            pos2 = num.index(sorted_num[right]) + 1
            if pos1 == pos2:    # find again
                pos2 = num[pos1:].index(sorted_num[right]) + pos1 + 1

            return min(pos1, pos2), max(pos1, pos2)


# debug
s = Solution()
print s.twoSum([0, 2, 3, 0], 0)

