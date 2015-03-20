/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bruteforce_n2.cpp
*  Create Date: 2014-12-03 22:21:37
*  Descripton:  bruteforce
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty())
            return "";
        for (int i = 0; i < strs[0].length(); i++) {
            for (int j = 1; j < strs.size(); j++)
                if (i >= strs[j].length() || strs[j][i] != strs[0][i])
                    return strs[0].substr(0, i);
        }
        return strs[0];
    }
};

int main() {
    Solution s;
    int n;
    string t;
    while (cin >> n) {
        vector<string> strs;;
        while (n--) {
            cin >> t;
            strs.push_back(t);
        }
        cout << s.longestCommonPrefix(strs) << endl;
    }
    return 0;
}

