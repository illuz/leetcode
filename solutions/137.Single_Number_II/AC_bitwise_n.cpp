/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitwise_n.cpp
*  Create Date: 2015-01-06 10:37:07
*  Descripton:  bitwise!!!
*               x[j] = (x[j-1] & a) | (x[j] & ~a)
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int singleNumber(int A[], int n) {
        if (!n)
            return 0;
        int x0 = ~0, x1 = 0, x2 = 0, t;
        for (int i = 0; i < n; i++) {
            t = x2;
            x2 = (x1 & A[i]) | (x2 & ~A[i]);
            x1 = (x0 & A[i]) | (x1 & ~A[i]);
            x0 = (t & A[i]) | (x0 & ~A[i]);
        }
        return x1;
    }
};

int main() {
    int n, a[100];
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << s.singleNumber(a, n) << endl;
    }
    return 0;
}

