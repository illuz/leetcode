/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n!.cpp
*  Create Date: 2015-01-01 11:35:04
*  Descripton:  just as the version I 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    void dfs(vector<vector<int> > &ans, vector<int> &single,
            vector<int> &candi, int cur, int rest) {
        int sz = candi.size();
        if (rest == 0) {
            // to avoid [[1,1,1], 2]
            if (!single.empty() && cur < sz && single[single.size() - 1] == candi[cur])
                return;
            ans.push_back(single);
            return;
        }
        if (sz <= cur || rest < 0)
            return;
        // choose cur
        single.push_back(candi[cur]);
        dfs(ans, single, candi, cur + 1, rest - candi[cur]);
        single.pop_back();
        // don't choose cur
        // not contain duplicate combinations
        if (!single.empty() && single[single.size() - 1] == candi[cur])
            return;
        dfs(ans, single, candi, cur + 1, rest);
    }
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        vector<vector<int> > ans;
        vector<int> single;
        sort(num.begin(), num.end());
        dfs(ans, single, num, 0, target);
        return ans;
    }
};

int main() {
    int tar;
    int n;
    Solution s;
    cin >> n >> tar;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<int> > res = s.combinationSum2(v, tar);
    for (auto &i : res) {
        for (auto &j : i)
            cout << j << ' ';
        puts("");
    }
    return 0;
}

