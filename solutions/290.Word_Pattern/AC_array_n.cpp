/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_map_nlogn.cpp
*  Create Date: 2015-10-24 22:32:22
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string mp[26];
        int i = 0;
        for (auto c : pattern) {
            string word = "";
            // go pass space
            while (str[i] != '\0' && !isalpha(str[i])) {
                ++i;
            }
            // get word
            while (str[i] != '\0' && isalpha(str[i])) {
                word += str[i++];
            }
            if (word == "")
                return false;
            if (mp[c - 'a'] == "") {
                for (int i = 0 ; i < 26; ++i)
                    if (mp[i] == word)
                        return false;
                mp[c - 'a'] = word;
            } else {
                if (mp[c - 'a'] != word)
                    return false;
            }
        }
        return str[i] == '\0';
    }
};

int main() {
    Solution s;
    cout << s.wordPattern("abba", "dog cat cat dog");
    return 0;
}

