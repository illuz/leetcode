/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_recursive_n!.cpp
*  Create Date: 2015-01-29 09:23:32
*  Descripton:  DFS
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        if (*p == '*') {
            while (*p == '*')
                ++p;
            if (*p == 0)
                return true;
            while (*s != 0 && !isMatch(s, p))
                ++s;
            return *s != 0;
        } else if (*s == 0 || *p == 0)
            return *s == *p;
        else if (*p == *s || *p == '?') {
            while (*p && (*p == *s || *p == '?'))
                ++s, ++p;
            return isMatch(s, p);
        }
        else
            return false;
    }
};

int main() {
    char s[100], p[100];
    Solution ss;
    while (cin >> s >> p)
        cout << ss.isMatch(s, p) << endl;
    return 0;
}

