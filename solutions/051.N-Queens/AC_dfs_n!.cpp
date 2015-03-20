/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n!.cpp
*  Create Date: 2015-02-03 10:42:31
*  Descripton:  DFS + cut.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    // shared variable
    vector<vector<string> > result;
    vector<string> cur;    // current
    vector<int> col;    // columns placed queens
    vector<int> m_diag;    // main diag placed queens
    vector<int> a_diag;    // anti main diag placed queens
    int N;

    void dfs(int row) {
        if (row == N) {
            result.push_back(cur);
            return;
        }
        for (int i = 0; i < N; ++i) {
            if (col[i] || m_diag[row + i] || a_diag[row - i + N])
                continue;
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  1;
            cur[row][i] = 'Q';
            dfs(row + 1);
            cur[row][i] = '.';
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  0;
        }
    }

public:
    vector<vector<string> > solveNQueens(int n) {
        result.clear();
        cur = vector<string>(n, string(n, '.'));
        col = vector<int>(n, 0);
        m_diag = vector<int>(n << 1, 0);
        a_diag = vector<int>(n << 1, 0);
        N = n;

        dfs(0);
        return result;
    }
};

int main() {
    int n;
    Solution s;
    cin >> n;
    vector<vector<string> > ans = s.solveNQueens(n);
    for (auto &i : ans) {
        for (auto &j : i)
            cout << j << endl;
        cout << endl;
    }
    return 0;
}

