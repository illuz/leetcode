/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n2.cpp
*  Create Date: 2014-12-15 14:50:13
*  Descripton:  simulation 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > ans(numRows);
        if (numRows == 0)
            return ans;
        for (int i = 0; i < numRows; i++) {
            ans[i].push_back(1);
            for (int j = 1; j < i; j++)
                ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
            if (i)
                ans[i].push_back(1);
        }
        return ans;
    }
};

int main() {
    int n;
    Solution s;
    while (cin >> n) {
        vector<vector<int> > ans = s.generate(n);
        for (vector<int> i : ans) {
            for (int j : i)
                printf("%d ", j);
            puts("");
        }
    }
    return 0;
}

