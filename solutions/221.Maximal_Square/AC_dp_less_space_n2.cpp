/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_less_space_n2.cpp
*  Create Date: 2015-07-31 20:22:58
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;
        // roll array
        vector<int> up(m);
        vector<int> left(n);
        vector<vector<int> > dp(2, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i == 0) {
                    up[j] = matrix[i][j] - '0';
                } else {
                    up[j] = matrix[i][j] == '1' ? up[j] + 1 : 0;
                }
                if (j == 0) {
                    left[i] = matrix[i][j] - '0';
                } else {
                    left[i] = matrix[i][j] == '1' ? left[i] + 1 : 0;
                }
                if (i == 0 || j == 0) {
                    dp[i&1][j] = matrix[i][j] - '0';
                } else {
                    dp[i&1][j] = min(dp[(i - 1)&1][j - 1] + 1, min(up[j], left[i]));
                }
                ans = max(ans, dp[i&1][j]);
            }
        }
        return ans * ans;
    }
};

int main() {

    return 0;
}

