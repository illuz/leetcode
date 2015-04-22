/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-04-22 17:29:42
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> vis;

        while (vis.find(n) == vis.end()) {
            vis.insert(n);
            int tmp = 0;
            while (n) {
                tmp += (n%10) * (n%10);
                n /= 10;
            }
            n = tmp;
            if (n == 1)
                return true;
        }

        return false;
    }
};

int main() {
    Solution s;
    int n;
    for (n = 0; n < 10000; ++n) {
        if (s.isHappy(n))
            cout << n << ", ";
    }
    return 0;
}

