/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n!.cpp
*  Create Date: 2015-08-09 15:08:22
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    void dfs(vector<vector<int> > &ans, vector<int> &single,
            int start, int rest, int target) {
        if (rest == 0 && target == 0)
            ans.push_back(single);
        if (rest < 0 || target < 0 || target < start || start == 10)
            return;
        // not choose
        dfs(ans, single, start + 1, rest, target);
        // choose
        single.push_back(start);
        dfs(ans, single, start + 1, rest - 1, target - start);
        single.pop_back();
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int> > ans;
        vector<int> single;
        dfs(ans, single, 1, k, n);
        return ans;
    }
};

int main() {
    int k;
    int n;
    Solution s;
    cin >> k >> n;
    vector<vector<int> > res = s.combinationSum3(k, n);
    for (auto &i : res) {
        for (auto &j : i)
            cout << j << ' ';
        puts("");
    }
    return 0;
}

