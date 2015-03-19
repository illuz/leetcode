/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_2^n.cpp
*  Create Date: 2015-03-19 10:10:55
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    bool isPalindr(string s) {
        int len = s.length();
        for (int i = 0; i < len; ++i)
            if (s[i] != s[len - i - 1])
                return false;
        return true;
    }
public:
    int minCut(string s) {
        int len = s.length();
        if (isPalindr(s))
            return 0;
        int cut = len - 1;
        for (int i = 1; i < len; ++i)
            if (isPalindr(s.substr(0, i)))
                cut = min(cut, 1 + minCut(s.substr(i)));
        return cut;
    }
};

int main() {
    string str;
    Solution s;
    while (cin >> str)
        cout << s.minCut(str) << endl;
    return 0;
}

