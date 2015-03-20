/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_nm.cpp
*  Create Date: 2014-12-26 10:27:38
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

    bool checkPoint(int x, int y, int n, int m) {
        return (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y]);
    }

    bool checkNext(int x, int y, int n, int m) {
        int tx, ty;
        for (int i = 0; i < 4; i++) {
            tx = x + dx[i];
            ty = y + dy[i];
            if (checkPoint(tx, ty, n, m))
                return true;
        }
        return false;
    }

public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        int n = matrix.size();
        int m = n ? matrix[0].size() : 0;
        vector<int> res;
        if (!n || !m)
            return res;
        memset(vis, 0, sizeof(vis));
        int curx = 0, cury = 0, curd = 0;
        res.push_back(matrix[curx][cury]);
        vis[curx][cury] = true;
        while (checkNext(curx, cury, n, m)) {
            if (checkPoint(curx + dx[curd], cury + dy[curd], n, m)) {
                curx += dx[curd];
                cury += dy[curd];
                vis[curx][cury] = true;
                res.push_back(matrix[curx][cury]);
            } else {
                curd = (curd + 1) % 4;
            }
        }
        return res;
    }
};

int main() {
    int n;
    Solution s;
    while (cin >> n) {
        vector<vector<int> > mat(n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                mat[i].push_back(n * i + j + 1);
        vector<int> ans = s.spiralOrder(mat);
        for (auto &i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

