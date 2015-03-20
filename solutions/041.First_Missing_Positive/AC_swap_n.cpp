/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_swap_n.cpp
*  Create Date: 2015-01-28 09:55:08
*  Descripton:  Just like bucket sort.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        for (int i = 0; i < n; ) {
            if ((A[i] < n && A[i] > 0) &&
                    (A[i] != i && A[A[i]] != A[i]))
                swap(A[i], A[A[i]]);
            else
                ++i;
        }
        for (int i = 1; i < n; ++i)
            if (!A[i] != i)
                return i;

        return A[0] == n ? n + 1 : n;
    }
};

int main() {
    int n, A[100];
    Solution s;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << s.firstMissingPositive(A, n) << endl;
    return 0;
}


