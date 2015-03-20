/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_2^n.cpp
*  Create Date: 2015-02-07 18:59:30
*  Descripton:  Use dfs.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    void dfs(int dep, vector<int> &S, vector<int> &cur,
            vector<vector<int> > &res) {
        if (dep == S.size()) {
            res.push_back(cur);
        } else {
            // not choose
            dfs(dep + 1, S, cur, res);
            // choose
            cur.push_back(S[dep]);
            dfs(dep + 1, S, cur, res);
            cur.pop_back();
        }
    }
public:
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int> > res;
        vector<int> cur;
        sort(S.begin(), S.end());
        dfs(0, S, cur, res);
        return res;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> S(n);
    for (auto &i : S)
        cin >> i;
    Solution s;
    vector<vector<int> > res = s.subsets(S);
    for (auto &i : res) {
        for (auto &j : i)
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}

