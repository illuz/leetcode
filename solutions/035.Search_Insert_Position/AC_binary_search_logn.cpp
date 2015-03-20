/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_logn.cpp
*  Create Date: 2014-12-23 13:54:50
*  Descripton:  binary search
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        // if use lower_bound
        // return lower_bound(A, A + n, target) - A;
        
        int l = 0, r = n - 1, mid = 0;
        while (l < r) {
            mid = l + (r - l) / 2;
            // mid = (l + r) / 2;
            if (A[mid] < target)
                l = mid + 1;
            else
                r = mid;
        }
        return A[l] < target ? l + 1 : l;
    }
};

int main() {
    int n, tar;
    int A[100];
    Solution s;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    while (cin >> tar) {
        cout << s.searchInsert(A, n, tar) << endl;
    }
    return 0;
}

