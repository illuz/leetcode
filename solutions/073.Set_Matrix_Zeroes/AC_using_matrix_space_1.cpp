/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_using_matrix_space_1.cpp
*  Create Date: 2014-12-28 14:27:45
*  Descripton:  use one row and colume in matrix to record them
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        if (matrix.empty() || matrix[0].empty())
            return;
        int n = matrix.size(), m = matrix[0].size();
        int recrow = -1, reccol = -1;
        // record
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (!matrix[i][j]) {
                    // find out the first position to record
                    if (recrow == -1) {
                        recrow = i;
                        reccol = j;
                        // set the row and col be 0 if they are no 0
                        for (int k = 0; k < n; k++)
                            matrix[k][reccol] = !matrix[k][reccol];
                        for (int k = 0; k < m; k++)
                            matrix[recrow][k] = !matrix[recrow][k];
                    } else if (recrow != i && reccol != j) {
                        matrix[i][reccol] = 1;
                        matrix[recrow][j] = 1;
                    }
                }

        if (recrow == -1)
            return;

        for (int i = 0; i < n; i++) {
            if (i == recrow)
                continue;
            for (int j = 0; j < m; j++) {
                if (j == reccol)
                    continue;
                if (matrix[i][reccol] || matrix[recrow][j])
                    matrix[i][j] = 0;
            }
        }

        // set the row and col be 0
        for (int k = 0; k < n; k++)
            matrix[k][reccol] = 0;
        for (int k = 0; k < m; k++)
            matrix[recrow][k] = 0;
    }
};

int main() {
    int n, m;
    Solution s;
    cin >> n >> m;
    vector<vector<int> > mat(n, vector<int>(m));
    for (auto &i : mat)
        for (auto &j : i)
            cin >> j;
    s.setZeroes(mat);
    for (auto &i : mat) {
        for (auto &j : i)
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}

