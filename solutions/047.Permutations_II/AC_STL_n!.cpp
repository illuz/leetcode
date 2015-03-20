/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_STL_n!.cpp
*  Create Date: 2015-01-31 08:16:19
*  Descripton:  STL
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        sort(num.begin(), num.end());
        vector<vector<int> > res;
        do {
            res.push_back(num);
        } while (next_permutation(num.begin(), num.end()));
        return res;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (auto &i : num)
        cin >> i;
    Solution s;
    vector<vector<int> > ans = s.permuteUnique(num);
    for (auto &i : ans) {
        for (auto &j : i)
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}

