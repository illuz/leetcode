/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-08-04 09:08:17
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> rec(26, 0);
        for (char i : s) {
            ++rec[i - 'a'];
        }
        for (char i : t) {
            if (--rec[i - 'a'] < 0)
                return false;
        }
        return s.length() == t.length();
    }
};

int main() {

    return 0;
}

