/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n2.cpp
*  Create Date: 2015-04-21 09:37:41
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        int len = s.length();
        vector<int> dp(len + 1);
        dp[0] = 1;

        for (int i = 1; i <= len; ++i) {
            for (int j = 1; j <= i; ++j) {
                // check
                if (wordDict.find(s.substr(i-j, j)) != wordDict.end()) {
                    dp[i] = dp[i - j];
                }
                // if is matched
                if (dp[i])
                    break;
            }
        }

        return dp[len];
    }
};

int main() {
    Solution s;
    string a, b;
    int n;
    unordered_set<string> wordDict;
    cin >> a;
    cin >> n;
    while (n--) {
        cin >> b;
        wordDict.insert(b);
    }

    cout << s.wordBreak(a, wordDict) << endl;
    return 0;
}

