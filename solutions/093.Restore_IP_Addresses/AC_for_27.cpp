/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_for_27.cpp
*  Create Date: 2015-03-01 19:45:58
*  Descripton:  Consider on the length of every part.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    bool isValid(string s) {
        if (s.length() > 3 || s == "" || (s.length() >= 2 && s[0] == '0') ||
                (s.length() == 3 && s > "255"))
            return false;
        return true;
    }
public:
    vector<string> restoreIpAddresses(string s) {
        int len = s.length();
        vector<string> ret;
        for (int i = 1; i < 4 && i < len - 2; ++i) {
            for (int j = 1; j < 4 && i + j < len - 1; ++j)
                for (int k = 1; k < 4 && i + j + k < len; ++k) {
                    string s1 = s.substr(0, i);
                    string s2 = s.substr(i, j);
                    string s3 = s.substr(i + j, k);
                    string s4 = s.substr(i + j + k);
                    if (isValid(s1) && isValid(s2) && isValid(s3) && isValid(s4))
                        ret.push_back(s1 + "." + s2 + "." + s3 + "." + s4);
                }
        }
        return ret;
    }
};

int main() {
    Solution s;
    string ss;
    while (cin >> ss) {
        vector<string> res = s.restoreIpAddresses(ss);
        for (auto &i : res)
            cout << i << endl;
    }
    return 0;
}

