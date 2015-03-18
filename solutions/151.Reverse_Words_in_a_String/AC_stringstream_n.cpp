/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stringstream_n.cpp
*  Create Date: 2015-03-18 16:26:06
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    void reverseWords(string &s) {
        stringstream is(s);
        is >> s;
        string tmp;
        while (is >> tmp)
            s = tmp + ' ' + s;
        if (s[0] == ' ')    // if input is all space then s will be the same
            s = "";
    }
};

int main() {
    Solution s;
    string str = "    ";
    s.reverseWords(str);
    cout << str << endl;
    return 0;
}

