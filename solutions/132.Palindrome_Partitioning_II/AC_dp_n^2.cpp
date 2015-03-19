/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n^2.cpp
*  Create Date: 2015-03-19 10:52:47
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int minCut(string s) {
        int n = s.length();
        vector<int> dp(n + 1);

        // init
        for (int i = 0; i <= n; ++i)
            dp[i] = i - 1;

        // dp
        for (int i = 0; i < n; ++i) {
            // odd
            for (int j = 0; i - j >= 0 && i + j < n
                    && s[i - j] == s[i + j]; ++j)
                dp[i + j + 1] = min(dp[i + j + 1], dp[i - j] + 1);
            // even
            for (int j = 1; i - j + 1 >= 0 && i + j < n
                    && s[i - j + 1] == s[i + j]; ++j)
                dp[i + j + 1] = min(dp[i + j + 1], dp[i - j + 1] + 1);
        }

        return dp[n];
    }
};

int main() {

    return 0;
}

