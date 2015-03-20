/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_nm.cpp
*  Create Date: 2014-12-26 10:58:30
*  Descripton:  simulation, use O(n*m) space
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 1010;

class Solution {
private:
    bool vis[N][N];
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    bool checkPoint(int x, int y, int n) {
        return (x >= 0 && x < n && y >= 0 && y < n && !vis[x][y]);
    }

    bool checkNext(int x, int y, int n) {
        int tx, ty;
        for (int i = 0; i < 4; i++) {
            tx = x + dx[i];
            ty = y + dy[i];
            if (checkPoint(tx, ty, n))
                return true;
        }
        return false;
    }

public:
    vector<vector<int> > generateMatrix(int n) {

        // generate a new matrix
        vector<vector<int> > matrix;
        for (int i = 0; i < n; i++)
            matrix.push_back(vector<int>(n));

        if (n == 0)
            return matrix;
        memset(vis, 0, sizeof(vis));
        int curx = 0, cury = 0, curd = 0, cnt = 1;
        vis[curx][cury] = true;
        matrix[curx][cury] = cnt++;
        while (checkNext(curx, cury, n)) {
            if (checkPoint(curx + dx[curd], cury + dy[curd], n)) {
                curx += dx[curd];
                cury += dy[curd];
                vis[curx][cury] = true;
                matrix[curx][cury] = cnt++;
            } else {
                curd = (curd + 1) % 4;
            }
        }
        return matrix;
    }
};

int main() {
    int n;
    Solution s;
    while (cin >> n) {
        vector<vector<int> > ans = s.generateMatrix(n);
        for (auto &i : ans) {
            for (auto &j : i)
                cout << j << ' ';
            cout << endl;
        }
    }
    return 0;
}

