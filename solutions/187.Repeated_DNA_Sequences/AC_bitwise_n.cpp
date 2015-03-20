/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitwise_n.cpp
*  Create Date: 2015-02-25 11:38:33
*  Descripton:  Modified from nlogn version. Use vector<bool>.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int get_value(char ch) {
        switch (ch) {
            case 'A': return 0; break;
            case 'C': return 1; break;
            case 'G': return 2; break;
            case 'T': return 3; break;
        }
    }

public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<bool> appeared(1100000), used(1100000);
        vector<string> ans;
        if (s.length() <= 10)
            return ans;

        int hash = 0;
        // get first substring's hash
        for (int i = 0; i < 10; i++)
            hash = (hash << 2) | get_value(s[i]);
        appeared[hash] = true;

        // deal every substring
        for (int i = 10; i < s.length(); ++i) {
            hash = ((1<<20) - 1) & ((hash << 2) | get_value(s[i]));
            if (used[hash])
                continue;
            if (appeared[hash]) {
                ans.push_back(s.substr(i - 9, 10));
                used[hash] = true;
            } else
                appeared[hash] = true;
        }

        return ans;
    }
};

int main() {
    string ss;
    Solution s;
    while (cin >> ss) {
        vector<string> ans = s.findRepeatedDnaSequences(ss);
        for (auto &i : ans)
            cout << i << ", ";
        cout << endl;
    }
    return 0;
}


