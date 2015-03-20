/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_record_n.cpp
*  Create Date: 2014-11-28 08:11:12
*  Descripton:  record the last appeared num's position, O(n)
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 300;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxlen = 0, left = 0;
       int sz = s.length();
       int prev[N];
       memset(prev, -1, sizeof(prev));

       for (int i = 0; i < sz; i++) {
           if (prev[s[i]] >= left) {
               left = prev[s[i]] + 1;
           }
           prev[s[i]] = i;
           maxlen = max(maxlen, i - left + 1);
       }
       return maxlen;
    }
};

int main() {
    Solution a;
    string s;
    while (cin >> s) {
        cout << a.lengthOfLongestSubstring(s) << endl;
    }
    return 0;
}

