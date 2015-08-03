/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n2.cpp
*  Create Date: 2015-07-31 20:02:26
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
        vector<vector<int> > up(n, vector<int>(m));
        vector<vector<int> > left(n, vector<int>(m));
        vector<vector<int> > dp(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i == 0) {
                    up[i][j] = matrix[i][j] - '0';
                } else {
                    up[i][j] = matrix[i][j] == '1' ? up[i - 1][j] + 1 : 0;
                }
                if (j == 0) {
                    left[i][j] = matrix[i][j] - '0';
                } else {
                    left[i][j] = matrix[i][j] == '1' ? left[i][j - 1] + 1 : 0;
                }
                if (i == 0 || j == 0) {
                    dp[i][j] = matrix[i][j] - '0';
                } else {
                    dp[i][j] = min(dp[i - 1][j - 1] + 1, min(up[i][j], left[i][j]));
                }
                ans = max(ans, dp[i][j]);
            }
        }
        return ans * ans;
    }
};

int main() {

    return 0;
}

