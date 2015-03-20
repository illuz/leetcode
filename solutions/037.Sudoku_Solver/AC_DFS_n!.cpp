/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_DFS_nn!.cpp
*  Create Date: 2014-12-15 14:29:52
*  Descripton:  I don't know the DFS is O((n*n)!) or not...
*                But if the matrix is empty, it may be O((n*n)).
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    int row[9], col[9], sqr[3][3];
    bool check(int x, int y, int val) {
        return !((row[x]>>val)&1) && !((col[y]>>val)&1) && !((sqr[x/3][y/3]>>val)&1);
    }
    void mark(int x, int y, int val, vector<vector<char> > &board) {
        row[x] |= (1<<val);
        col[y] |= (1<<val);
        sqr[x/3][y/3] |= (1<<val);
        board[x][y] = val + '1';
    }
    void unmark(int x, int y, int val, vector<vector<char> > &board) {
        row[x] -= (1<<val);
        col[y] -= (1<<val);
        sqr[x/3][y/3] -= (1<<val);
        board[x][y] = '.';
    }
    bool dfs(int pos, vector<vector<char> > &board) {
        // x = pos / 9, y = pos % 9
        if (pos == 81)
            return true;
        if (board[pos/9][pos%9] != '.') {
            return dfs(pos + 1, board);
        } else {
            for (int i = 0; i < 9; i++)
                if (check(pos/9, pos%9, i)) {
                    mark(pos/9, pos%9, i, board);
                    if (dfs(pos + 1, board))
                        return true;
                    unmark(pos/9, pos%9, i, board);
                }
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char> > &board) {
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        memset(sqr, 0, sizeof(sqr));
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                if (board[i][j] != '.') {
                    mark(i, j, board[i][j] - '1', board);
                }
        dfs(0, board);
    }
};

int main() {
    vector<vector<char> > v;
    Solution s;
    char ch[10];
    for (int i = 0; i < 9; i++) {
        vector<char> v2;
        scanf("%s", ch);
        for (int j = 0; j < 9; j++) {
            v2.push_back(ch[j]);
        }
        v.push_back(v2);
    }
    s.solveSudoku(v);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            printf("%c", v[i][j]);
        puts("");
    }
    return 0;
}

