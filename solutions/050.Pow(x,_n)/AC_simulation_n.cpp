/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-31 00:10:05
*  Descripton:  simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    double pow(double x, int n) {
        double res = 1;
        if (n < 0) {
            n = -n;
            x = 1.0 / x;
        }
        while (n > 0) {
            if (n % 2)
                res *= x;
            n >>= 1;
            x *= x;
        }
        return res;
    }
};

int main() {
    int n;
    double x;
    Solution s;
    while (cin >> x >> n)
        cout << s.pow(x, n) << endl;
    return 0;
}

