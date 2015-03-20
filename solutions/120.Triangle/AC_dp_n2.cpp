/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n2.cpp
*  Create Date: 2015-02-25 11:54:20
*  Descripton:  dp[i] = min(dp[i - 1], dp[i]) + value[i]
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        if (triangle.empty())
            return 0;
        vector<int> dp(triangle.size() + 1, INT_MAX);
        dp[1] = triangle[0][0]; // init
        for (int i = 1; i < triangle.size(); ++i) {
            for (int j = i + 1; j > 0; --j)
                dp[j] = min(dp[j - 1], dp[j]) + triangle[i][j - 1];
        }
        return *min_element(dp.begin(), dp.end());
    }
};

int main() {
    int n, t;
    cin >> n;
    vector<vector<int> > tri(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> t;
            tri[i].push_back(t);
        }
    }
    Solution s;
    cout << s.minimumTotal(tri) << endl;
    return 0;
}

