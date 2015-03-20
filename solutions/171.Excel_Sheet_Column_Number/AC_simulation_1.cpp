/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.cpp
*  Create Date: 2015-02-05 09:51:20
*  Descripton:  Simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int titleToNumber(string s) {
        int col = 0;
        for (char i : s)
            col = col * 26 + (i - 'A' + 1);
        return col;
    }
};

int main() {
    string str;
    Solution s;
    while (cin >> str)
        cout << s.titleToNumber(str) << endl;
    return 0;
}

