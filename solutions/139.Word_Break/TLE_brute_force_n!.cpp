/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_brute_force_n!.cpp
*  Create Date: 2015-04-15 20:14:48
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    bool isInDict(int left, int len, string& s, unordered_set<string>& wordDict) {
        if (wordDict.find(s.substr(left, len)) != wordDict.end())
            return true;
        for (int i = 1; i < len; ++i) {
            if (isInDict(left, i, s, wordDict) && isInDict(left + i, len - i, s, wordDict))
                return true;
        }
        return false;
    }

public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        return isInDict(0, s.length(), s, wordDict);
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

