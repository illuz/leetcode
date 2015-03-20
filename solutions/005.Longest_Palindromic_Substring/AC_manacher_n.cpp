/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_manacher_n.cpp
*  Create Date: 2014-11-28 09:35:10
*  Descripton:  just as what I post:
*                http://blog.csdn.net/hcbbt/article/details/18952129 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 1001;

class Solution {
public:
    string longestPalindrome(string s) {
        int p[N<<1];
        string t = "$";
        for (char ch : s) {
            t += '#';
            t += ch;
        }
        t += '#';
        // t为处理过的字符串，p为记录长度的数组  
        memset(p, 0, sizeof(p));  
        // mx为已判断回文串最右边位置，id为中间位置，mmax记录p数组中最大值  
        int mx = 0, id = 0, mmax = 0;  
        int len = t.length();
        int right = 0;
        for (int i = 1; i < len; i++) {  
            p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;  
            while (t[i + p[i]] == t[i - p[i]])  
                p[i]++;  
            if (i + p[i] > mx) {  
                mx = i + p[i];  
                id = i;  
            }  
            if (mmax < p[i]) {
                mmax = p[i]; 
                right = i;
            }
        }  
        // 最长为mmax - 1  
        return s.substr(right/2 - mmax/2, mmax-1);
    }
};

int main() {
    Solution s;
    string str;
    while (cin >> str) {
        cout << s.longestPalindrome(str) << endl;
    }
    return 0;
}

