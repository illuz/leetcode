/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-05-01 10:04:38
*  Descripton:  Record and simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<char> mp(300);
        vector<bool> vis(300);
        for (int i = 0; i < s.length(); ++i) {
            if (mp[s[i]]) {
                if (mp[s[i]] != t[i])
                    return false;
            } else {
                // char in t is visited
                if (vis[t[i]])
                    return false;

                mp[s[i]] = t[i]; 
                vis[t[i]] = 1;
            }
        }

        return true;
    }
};

int main() {

    return 0;
}

