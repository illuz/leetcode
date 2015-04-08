/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bfs_n.cpp
*  Create Date: 2015-04-08 19:30:34
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

class Solution {
public:
    int numIslands(vector<vector<char>> &grid) {
        if (grid.empty() || grid[0].empty())
            return 0;

        queue<int> q;
        int ret = 0;
        int n = grid.size(), m = grid[0].size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {

                if (grid[i][j] == '1') {
                    ret += 1;
                    // bfs
                    while (!q.empty())
                        q.pop();

                    q.push(i * m + j);
                    grid[i][j] = '2';

                    while (!q.empty()) {
                        int x = q.front() / m;
                        int y = q.front() % m;
                        q.pop();

                        for (int k = 0; k < 4; ++k) {
                            int newx = x + dx[k];
                            int newy = y + dy[k];
                            if (newx < 0 || newx >= n || newy < 0 || newy >= m || grid[newx][newy] != '1')
                                continue;
                            grid[newx][newy] = '2';
                            q.push(newx * m + newy);
                        }
                    }
                }
            }
        }

        return ret;
    }
};

int main() {
    vector<vector<char> > grid({{'1', '0', '1', '1', '0', '1', '1'}});
    Solution s;
    cout << s.numIslands(grid);
    return 0;
}

