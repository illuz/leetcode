/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.cpp
*  Create Date: 2015-01-08 14:47:56
*  Descripton:  simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int val[255];
    void init() {
        val['I'] = 1; val['V'] = 5; val['X'] = 10; val['L'] = 50;
        val['C'] = 100; val['D'] = 500; val['M'] = 1000;
    }
public:
    int romanToInt(string s) {
        init();
        int ret = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && val[s[i]] > val[s[i - 1]]) {
                ret += val[s[i]] - 2 * val[s[i - 1]];
            } else {
                ret += val[s[i]];
            }
        }
        return ret;
    }
};

int main() {
    string str;
    Solution s;
    while (cin >> str)
        cout << s.romanToInt(str) << endl;
    return 0;
}

