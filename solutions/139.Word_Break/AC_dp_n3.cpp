/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n3.cpp
*  Create Date: 2015-04-15 20:27:12
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        int len = s.length();
        vector<vector<int> > dp(len + 1, vector<int>(len + 1));

        for (int slen = 1; slen <= len; ++slen) {
            for (int start = 0; start + slen <= len; ++start) {
                int end = start + slen;

                // find in dict
                if (wordDict.find(s.substr(start, slen)) != wordDict.end()) {
                    dp[start][end] = true;
                    continue;
                }

                // find in sub-string
                for (int i = start + 1; i < end; ++i) {
                    if (dp[start][i] && dp[i][end]) {
                        dp[start][end] = true;
                        break;
                    }
                }
            }
        }

        return dp[0][len];
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

