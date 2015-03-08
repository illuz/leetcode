/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_memorial_memorial_dfs_n^4.cpp
*  Create Date: 2015-03-08 13:42:18
*  Descripton:  Use O(n^3) space to memorial.
*               dp[i][j][n] means the s1[i~i+n] and s2[j~j+n] is match.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

int dp[110][110][110];

class Solution {
private:
    bool memorial_dfs(string &s1, string &s2, int p1, int p2, int len) {
        if (len == 1)
            return s1[p1] == s2[p2];
        if (s1.substr(p1, len) == s2.substr(p2, len))
            return true;
        if (dp[p1][p2][len] != -1)
            return dp[p1][p2][len];

        for (int i = 1; i < len; ++i) {
            if ((memorial_dfs(s1, s2, p1, p2, i) && memorial_dfs(s1, s2, p1 + i, p2 + i, len - i))
                    || (memorial_dfs(s1, s2, p1, p2 + len - i, i) && memorial_dfs(s1, s2, p1 + i, p2, len - i)))
                return dp[p1][p2][len] = true;
        }

        return dp[p1][p2][len] = false;
    }
public:
    bool isScramble(string s1, string s2) {
        if (s1.size() != s2.size())
            return false;
        int len = s1.size();
        memset(dp, -1, sizeof(dp));
        return memorial_dfs(s1, s2, 0, 0, len);
    }
};

int main() {
    string s1, s2;
    Solution s;
    while (cin >> s1 >> s2)
        cout << s.isScramble(s1, s2) << endl;
    return 0;
}

