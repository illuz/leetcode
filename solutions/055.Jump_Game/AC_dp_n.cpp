/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n.cpp
*  Create Date: 2015-01-30 09:46:40
*  Descripton:  f[i] means the max steps can go at i
*               f[i] = max(f[i - 1], A[i - 1]) - 1
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool canJump(int A[], int n) {
        // vector<int> f(n, 0);
        int f[2];        // compress to O(1)
        f[0] = 0;
        for (int i = 1; i < n; ++i) {
            f[i&1] = max(f[(i-1)&1], A[i - 1]) - 1;
            if (f[i&1] < 0)
                return false;
        }
        return f[(n-1)&1] >= 0;
    }
};

int main() {
    int n, A[1000];
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> A[i];
        cout << s.canJump(A, n) << endl;
    }
    return 0;
}

