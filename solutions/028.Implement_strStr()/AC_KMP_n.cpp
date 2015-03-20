/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_KMP_n.cpp
*  Create Date: 2014-12-24 10:19:32
*  Descripton:  KMP
*               just as HDU 2087: http://blog.csdn.net/hcbbt/article/details/17003191
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int next[1000100];
public:
    int strStr(char *haystack, char *needle) {
        int hlen = strlen(haystack);
        int nlen = strlen(needle);
        int i, j;
        if (hlen < nlen)
            return -1;
        if (nlen == 0)
            return 0;

        // KMP
        // get next matching array
        // int *next = new int(nlen + 1);
        // Because the string will be 1 million, so we cannot use `int *next = new int(nlen + 1)`, it will exceed the memory in function
        i = 0;
        j = -1;
        next[0] = -1;
        while (i < nlen) {
            if (j == -1 || needle[i] == needle[j]) {
                i++;
                j++;
                next[i] = j;
            } else
                j = next[j];
        }

        // matching
        i = 0;
        j = 0;
        while (i < hlen) {
            if (j == -1 || haystack[i] == needle[j]) {
                i++;
                j++;
            } else
                j = next[j];
            if (j == nlen)
                return i - nlen;
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

