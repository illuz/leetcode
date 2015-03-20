/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n!.cpp
*  Create Date: 2014-12-29 11:21:35
*  Descripton:  use dfs to generate combinations
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    void dfs(vector<vector<int> > &res, vector<int> &v,
            int cur, int rest, int n) {
        if (rest == 0) {
            res.push_back(v);
            return;
        }
        v.push_back(0);
        int len = v.size();
        for (int i = cur; i <= n - rest + 1; i++) {
            v[len - 1] = i;
            dfs(res, v, i + 1, rest - 1, n);
        }
        v.pop_back();
    }
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > res;
        if (n < k || !n || !k)
            return res;
        vector<int> v;
        dfs(res, v, 1, k, n);
        return res;
    }
};

int main() {
    int n, k;
    Solution s;
    while (cin >> n >> k) {
        vector<vector<int> > res = s.combine(n, k);
        for (auto &i : res) {
            for (auto &j : i)
                cout << j << ' ';
            cout << endl;
        }
    }
    return 0;
}

