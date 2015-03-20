/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n2.cpp
*  Create Date: 2014-12-15 15:00:00
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > ans(2);

        ans[0&1].push_back(1);
        if (rowIndex == 0)
            return ans[0&1];

        for (int i = 1; i <= rowIndex; i++) {
            ans[i&1].clear();
            ans[i&1].push_back(1);
            for (int j = 1; j < i; j++)
                ans[i&1].push_back(ans[!(i&1)][j - 1] + ans[!(i&1)][j]);
            ans[i&1].push_back(1);
        }
        return ans[rowIndex&1];
    }
};

int main() {
    int n;
    Solution s;
    while (cin >> n) {
        vector<int> v;
        v = s.getRow(n);
        for (int i : v)
            printf("%d ", i);
        puts("");
    }
    return 0;
}

