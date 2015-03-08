/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_cut_dfs_n^4.cpp
*  Create Date: 2015-03-08 13:35:49
*  Descripton:  The cut version.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isScramble(string s1, string s2) {
        if (s1.size() != s2.size())
            return false;
        if (s1 == s2)
            return true;

        int cnt[256] = {0};
        for (auto &ch : s1)
            ++cnt[ch];
        for (auto &ch : s2)
            --cnt[ch];
        for (int i = 0; i < 256; ++i)
            if (cnt[i])
                return false;

        for (int i = 1; i < s1.size(); ++i) {
            string s11 = s1.substr(0, i);
            string s12 = s1.substr(i);
            string s21, s22;

            // forward order
            s21 = s2.substr(0, i);
            s22 = s2.substr(i);
            if (isScramble(s11, s21) && isScramble(s12, s22))
                return true;
            // reverse order
            s21 = s2.substr(s1.size() - i);
            s22 = s2.substr(0, s1.size() - i);
            if (isScramble(s11, s21) && isScramble(s12, s22))
                return true;
        }

        return false;
    }
};

int main() {
    string s1, s2;
    Solution s;
    while (cin >> s1 >> s2)
        cout << s.isScramble(s1, s2) << endl;
    return 0;
}

