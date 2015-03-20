/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n2.cpp
*  Create Date: 2015-02-04 10:02:24
*  Descripton:  dp
*               Dp[i][j]: the distance of word1[0,i] and word2[0,j].
*               Using only dp[j] is enough.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int minDistance(string word1, string word2) {
        if (word1.length() < word2.length())
            swap(word1, word2);

        vector<int> dp(word2.length() + 1);    // word2 will cost less space
        // init
        for (int i = 0; i < dp.size(); ++i)
            dp[i] = i;

        int upleft = 0;        // Record the dp[i-1][j-1]. It must be used.
        for (int i = 1; i <= word1.size(); ++i) {
            upleft = dp[0];
            dp[0] = i;

            for (int j = 1; j <= word2.size(); ++j) {
                int rec = dp[j];
                if (word1[i - 1] == word2[j - 1])
                    dp[j] = upleft;
                else
                    dp[j] = min(upleft, min(dp[j], dp[j - 1])) + 1;
                upleft = rec;
            }
        }
        return dp[word2.length()];
    }
};

int main() {
    string a, b;
    Solution s;
    cin >> a >> b;
    cout << s.minDistance(a, b) << endl;
    return 0;
}

