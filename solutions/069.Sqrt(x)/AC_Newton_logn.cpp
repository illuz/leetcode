/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_Newton_logn.cpp
*  Create Date: 2015-02-06 23:25:45
*  Descripton:  Newton's method.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int sqrt(int x) {
        if (x == 0)
            return 0;
        double lasty = 0;
        double y = 1;
        while (y != lasty) {
            lasty = y;
            y = (y + x / y) / 2;
        }
        return int(y);
    }
};

int main() {
    int x;
    Solution s;
    while (cin >> x)
        cout << s.sqrt(x) << endl;
    return 0;
}

