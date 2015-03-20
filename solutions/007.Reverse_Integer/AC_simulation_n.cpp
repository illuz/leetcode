/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-11-29 23:21:10
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int reverse(int x) {
        long long tmp = abs((long long)x);
        long long ret = 0;
        while (tmp) {
            ret = ret * 10 + tmp % 10;
            if (ret > INT_MAX)
                return 0;
            tmp /= 10;
        }
        if (x > 0)
            return (int)ret;
        else
            return (int)-ret;
    }
};


int main() {
    Solution a;
    int x;
    while (cin >> x) cout << a.reverse(x) << endl;
    return 0;
}

