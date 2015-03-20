/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_logn.cpp
*  Create Date: 2015-02-06 10:11:06
*  Descripton:  sqrt(x) <= (x/2 + 1), binary search in [1, x/2+1]
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int sqrt(int x) {
        if (x == 0)
            return 0;
        int l = 1, r = x / 2 + 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (m <= x / m && x / (m + 1) < m + 1)
                return m;
            if (x / m < m)
                r = m - 1;
            else
                l = m + 1;
        }
        // will not be here
        return 0;
    }
};

int main() {
    int x;
    Solution s;
    while (cin >> x)
        cout << s.sqrt(x) << endl;
    return 0;
}

