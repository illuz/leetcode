/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_logn.cpp
*  Create Date: 2014-11-27 14:58:40
*  Descripton:  O(log(n+m))
*                using binary search to find k-th large number
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

class Solution {
    private:
        double findKthSortedArrays(int A[], int m, int B[], int n, int k) {
            if (m < n) {
                swap(n, m);
                swap(A, B);
            }
            if (n == 0)
                return A[k - 1];
            if (k == 1)
                return min(A[0], B[0]);

            int pb = min(k / 2, n), pa = k - pb;
            if (A[pa - 1] > B[pb - 1])
                return findKthSortedArrays(A, m, B + pb, n - pb, k - pb);
            else if (A[pa - 1] < B[pb - 1])
                return findKthSortedArrays(A + pa, m - pa, B, n, k - pa);
            else
                return A[pa - 1];
        }

    public:
        double findMedianSortedArrays(int A[], int m, int B[], int n) {
            if ((n + m)&1)
                return findKthSortedArrays(A, m, B, n, (n + m) / 2 + 1);
            else
                return (findKthSortedArrays(A, m, B, n, (n + m) / 2 + 1) +
                        findKthSortedArrays(A, m, B, n, (n + m) / 2)) / 2.0;
        }
};

int main() {
    int n, m;
    int A[100], B[100];
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++) 
            cin >> A[i];
        cin >> m;
        for (int i = 0; i < m; i++) 
            cin >> B[i];
        cout << s.findMedianSortedArrays(A, n, B, m) << endl;
    }
    return 0;
}

