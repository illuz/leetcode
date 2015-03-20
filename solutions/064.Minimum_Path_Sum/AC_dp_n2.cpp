/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n2.cpp
*  Create Date: 2015-01-03 13:02:25
*  Descripton:  dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        if (grid.empty() || grid[0].empty())
            return 0;
        int n = grid.size(), m = grid[0].size();
        vector<vector<int> > dp(2, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                dp[i&1][j] = grid[i][j];
                if (i && j)
                    dp[i&1][j] += min(dp[!(i&1)][j], dp[i&1][j - 1]);
                else if (i)
                    dp[i&1][j] += dp[!(i&1)][j];
                else if (j)
                    dp[i&1][j] += dp[i&1][j - 1];
            }
        return dp[!(n&1)][m - 1];
    }
};

int main() {
    int n, m;
    Solution s;
    while (cin >> n >> m) {
        vector<vector<int> > g(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];
        cout << s.minPathSum(g) << endl;
    }
    return 0;
}

