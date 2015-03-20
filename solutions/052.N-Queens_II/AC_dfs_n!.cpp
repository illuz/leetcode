/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n!.cpp
*  Create Date: 2015-02-03 11:06:56
*  Descripton:  Just like I verson.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    // shared variable
    int count;
    vector<int> col;    // columns placed queens
    vector<int> m_diag;    // main diag placed queens
    vector<int> a_diag;    // anti main diag placed queens
    int N;

    void dfs(int row) {
        if (row == N) {
            count++;
            return;
        }
        for (int i = 0; i < N; ++i) {
            if (col[i] || m_diag[row + i] || a_diag[row - i + N])
                continue;
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  1;
            dfs(row + 1);
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  0;
        }
    }

public:
    int totalNQueens(int n) {
        count = 0;
        col = vector<int>(n, 0);
        m_diag = vector<int>(n << 1, 0);
        a_diag = vector<int>(n << 1, 0);
        N = n;

        dfs(0);
        return count;
    }
};

int main() {
    int n;
    Solution s;
    cin >> n;
    int ans = s.totalNQueens(n);
    cout << ans << endl;
    return 0;
}

