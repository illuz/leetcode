/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_2^n.cpp
*  Create Date: 2015-02-20 10:00:25
*  Descripton:  simulation, G(n) = B(n) XOR B(n>>1)
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<int> grayCode(int n) {
        const size_t sz = 1<<n;
        vector<int> res(sz);
        for (size_t i = 0; i < sz; ++i)
            res[i] = (i ^ (i>>1));
        return res;
    }
};

int main() {
    int n;
    Solution s;
    while (cin >> n) {
        vector<int> res = s.grayCode(n);
        for (auto &i : res)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

