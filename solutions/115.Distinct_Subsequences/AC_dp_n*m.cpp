/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n*m.cpp
*  Create Date: 2015-03-11 10:53:52
*  Descripton:  dp[i][j]: result of sub-question(S[1...i], T[1..j])
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int numDistinct(string S, string T) {
        int n = S.length();
        int m = T.length();

        vector<vector<int> > dp(n + 1, vector<int>(m + 1));

        // init
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = 1;
        }
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (S[i - 1] == T[j - 1])
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return dp[n][m];
    }
};

int main() {

    return 0;
}

