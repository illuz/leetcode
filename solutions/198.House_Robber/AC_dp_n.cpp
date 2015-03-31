/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n.cpp
*  Create Date: 2015-03-31 21:12:08
*  Descripton:  dp[i] = max(dp[i - 1], dp[i - 2] + num[i])
*               dp[i]->cur, dp[i-1]->pre, dp[i-2]->ppre
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int rob(vector<int> &num) {
        if (num.empty())
            return 0;

        int ppre = 0, pre = 0, cur = 0;
        for (auto n : num) {
            cur = max(pre, ppre + n);
            ppre = pre;
            pre = cur;
        }

        return max(pre, ppre);
    }
};

int main() {
    int n;
    Solution s;
    cin >> n;
    vector<int> num(n);
    for (auto &i : num)
        cin >> i;
    cout << s.rob(num) << endl;
    return 0;
}

