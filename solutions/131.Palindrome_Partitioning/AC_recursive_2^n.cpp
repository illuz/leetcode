/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_2^n.cpp
*  Create Date: 2015-03-19 09:13:57
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    vector<vector<string>> ret;
    vector<string> single;

    void find_partition(string s) {
        for (int i = 1; i <= s.size(); ++i) {
            int left = 0, right = i - 1;
            // find recursive position
            while (left <= right && s[left] == s[right]) {
                ++left;
                --right;
            }
            // found then recursive
            if (left > right) {
                single.push_back(s.substr(0, i));
                if (i == s.size())
                    ret.push_back(single);
                find_partition(s.substr(i));
                single.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        find_partition(s);
        return ret;
    }
};

int main() {
    string str;
    Solution s;
    cin >> str;
    vector<vector<string>> res = s.partition(str);
    for (auto &x : res) {
        for (auto &y : x)
            cout << y << ' ';
        cout << endl;
    }
    return 0;
}

