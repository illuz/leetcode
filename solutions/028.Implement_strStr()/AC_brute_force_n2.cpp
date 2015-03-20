/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_brute_force_n2.cpp
*  Create Date: 2014-12-24 09:53:51
*  Descripton:  brute force, O(n*n) 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int strStr(char *haystack, char *needle) {
        int hlen = strlen(haystack);
        int nlen = strlen(needle);
        if (hlen < nlen)
            return -1;
        for (int i = 0; i <= hlen - nlen; i++) {
            if (!strncmp(haystack + i, needle, nlen))
                return i;
        }
        return -1;
    }
};

int main() {
    char a[100], b[100];
    Solution s;
    while (cin >> a >> b)
        cout << s.strStr(a, b) << endl;
    return 0;
}

