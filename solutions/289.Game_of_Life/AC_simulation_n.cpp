/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_mn.cpp
*  Create Date: 2015-10-28 14:53:51
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        if (board.empty() || board[0].empty())
            return;
        int n = board.size(), m = board[0].size();
        // compute the result to second bit
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int neighbors = 0;
                // 8 neighbors
                for (int k = 0; k < 8; ++k) {
                    // get new (x, y)
                    int x = i + dx[k], y = j + dy[k];
                    if (x < 0 || x >= n || y < 0 || y >= m)
                        continue;
                    if (board[x][y] & 1)
                        ++neighbors;
                }
                if ((neighbors == 2 && (board[i][j] & 1)) || neighbors == 3) {
                    // store into the 2 bit
                    board[i][j] |= 2;
                }
            }
        }

        // restore the result
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                board[i][j] >>= 1;
            }
        }
    }
};

int main() {
    Solution s;
    int n, m, x;
    cin >> n >> m;
    vector<vector<int>> b(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> x;
            b[i].push_back(x);
        }
    }
    s.gameOfLife(b);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

