# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_binary_search_logn.py
# Create Date: 2015-02-02 22:15:22
# Descripton:   

class Solution:
    def findKthSortedArrays(self, A, B, k):
        if len(A) < len(B):
            tmp = A
            A = B
            B = tmp
        if len(B) == 0:
            return A[k - 1]
        if k == 1:
            return min(A[0], B[0])

        pb = min(k / 2, len(B))
        pa = k - pb
        if A[pa - 1] > B[pb - 1]:
            return self.findKthSortedArrays(A, B[pb:], k - pb)
        elif A[pa - 1] < B[pb - 1]:
            return self.findKthSortedArrays(A[pa:], B, k - pa)
        else:
            return A[pa - 1]

    # @return a float
    def findMedianSortedArrays(self, A, B):
        if (len(A) + len(B)) % 2 == 1:
            return self.findKthSortedArrays(A, B, (len(A) + len(B)) / 2 + 1)
        else:
            return (self.findKthSortedArrays(A, B, (len(A) + len(B)) / 2) +
                self.findKthSortedArrays(A, B, (len(A) + len(B)) / 2 + 1)) / 2.0


# debug
s = Solution()
print s.findMedianSortedArrays([1, 2, 4], [3, 5, 6])

