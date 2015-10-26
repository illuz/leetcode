/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_nsqrtn.cpp
*  Create Date: 2015-10-26 10:11:03
*  Descripton:  recursiev + memorization
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 1010;

class Solution {
public:
    int helper(int n, vector<int> &result) {
        if (result[n] != 0)
            return result[n];
        int begin = int(sqrt(n));
        if (n == begin * begin)
            return 1;
        int res = n;
        for (int i = begin; i >= 1; --i) {
            res = min(res, 1 + helper(n - i * i, result));
        }
        return result[n] = res;
    }
    int numSquares(int n) {
        vector<int> result(n + 1);
        return helper(n, result);
    }
};

int main() {
    Solution s;
    cout << s.numSquares(12) << endl;
    cout << s.numSquares(13) << endl;
    return 0;
}

