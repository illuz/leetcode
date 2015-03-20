/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_xor_n.cpp
*  Create Date: 2015-01-03 12:58:31
*  Descripton:  xor
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int singleNumber(int A[], int n) {
        int res = 0;
        for (int i = 0; i < n; i++)
            res ^= A[i];
        return res;
    }
};

int main() {
    int n, A[100];
    Solution s;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << s.singleNumber(A, n) << endl;
    return 0;
}

