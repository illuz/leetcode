/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_optimization_nm.cpp
*  Create Date: 2015-01-29 09:54:14
*  Descripton:  Optimization: don't care the multi '*', if not
*                  match, just fall back to the nearest '*'.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        const char* star = NULL;    // position of * in p
        const char* spos = s;        // position in s, mapping *
        while (*s) {
            if (*p == '?' || *p == *s)    // match
                s++, p++;
            else if (*p == '*')        // recort the nearest star
                star = p++, spos = s;
            else if (star)            // fall back
                p = star + 1, s = ++spos;
            else
                return false;
        }
        // pass the rest *
        while (*p == '*')
            p++;
        return !*p;
    }
};

int main() {
    char s[100], p[100];
    Solution ss;
    while (cin >> s >> p)
        cout << ss.isMatch(s, p) << endl;
    return 0;
}

