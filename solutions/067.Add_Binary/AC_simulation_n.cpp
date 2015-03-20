/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-16 15:28:58
*  Descripton:  simulation 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.length(), blen = b.length();
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        // cout << a << endl;
        string ans;
        bool add = false;
        for (int i = 0; i < alen || i < blen; i++) {
            if (i >= alen)
                a += '0';
            if (i >= blen)
                b += '0';
            if (a[i] == '1' && b[i] == '1') {
                ans += add + '0';
                add = 1;
            } else if (a[i] == '1' || b[i] == '1') {
                ans += !add + '0';
            } else {
                ans += add + '0';
                add = 0;
            }
        }
        if (add)
            ans += '1';
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
    Solution s;
    string a, b;
    while (cin >> a >> b)
        cout << s.addBinary(a, b) << endl;
    return 0;
}

