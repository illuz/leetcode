/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search.cpp
*  Create Date: 2015-01-27 10:42:49
*  Descripton:  Like the I version
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool search(int A[], int n, int target) {
        int left = 0, right = n;
        while (left != right) {
            int mid = (left + right) / 2;
            if (A[mid] == target)
                return true;
            if (A[mid] > A[left]) {
                // [left~mid] is unrotated sorted
                if (A[left] <= target && target < A[mid])
                    right = mid;
                else
                    left = mid + 1;
            } else if (A[mid] < A[left]) {
                // [mid~right] is unrotated sorted
                if (A[mid] < target && target <= A[right - 1])
                    left = mid + 1;
                else
                    right = mid;
            } else    // skip
                left++;
        }
        return false;
    }
};

int main() {
    int n, A[100], tar;
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> A[i];
        cin >> tar;
        cout << s.search(A, n, tar) << endl;
    }
    return 0;
}

