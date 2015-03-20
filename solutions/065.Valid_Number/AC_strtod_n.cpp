/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_strtod_n.cpp
*  Create Date: 2015-02-23 18:08:07
*  Descripton:  use strtod: www.cplusplus.com/reference/cstdlib/strtod
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isNumber(string s) {
        const char *str = s.c_str();
        char *end;
        strtod(str, &end);
        if (end == str)
            return false;
        for (; *end; ++end)
            if (!isspace(*end))
                return false;
        return true;
    }
};

int main() {
    Solution s;
    string ss;
    while (getline(cin, ss))
        cout << s.isNumber(ss) << endl;
    return 0;
}

