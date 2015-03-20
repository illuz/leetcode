/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.cpp
*  Create Date: 2015-02-05 09:26:31
*  Descripton:  Simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string convertToTitle(int n) {
        string ret = "";
        --n;
        while (n >= 0) {
            ret += (char)('A' + n % 26);
            n /= 26;
            --n;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};

int main() {
    int n;
    Solution s;
    while (cin >> n)
        cout << s.convertToTitle(n) << endl;
    return 0;
}

