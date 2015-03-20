/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2014-12-18 10:51:22
*  Descripton:  recursive, because f(n) = f(n - 1) + f(n - 2), just like Fibonacci
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0)
            return 1;
        if (n <= 3)
            return n;
        int pre1 = 1, pre2 = 2, cur;
        for (int i = 3; i <= n; i++) {
            cur = pre1 + pre2;
            pre1 = pre2;
            pre2 = cur;
        }
        return cur;
    }
};

int main() {
    int n;
    Solution s;
    while (cin >> n)
        cout << s.climbStairs(n) << endl;
    return 0;
}

