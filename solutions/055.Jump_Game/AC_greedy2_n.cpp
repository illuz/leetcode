/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_greedy_n.cpp
*  Create Date: 2015-01-30 09:40:38
*  Descripton:  Greedy. Using O(1) space and O(n) time.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool canJump(int A[], int n) {
        int reach = 1;
        for (int i = 0; i < reach && reach < n; ++i)
            reach = max(reach, i + 1 + A[i]);
        return reach >= n;
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

