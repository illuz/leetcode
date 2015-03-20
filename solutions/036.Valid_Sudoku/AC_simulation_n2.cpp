/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n2.cpp
*  Create Date: 2014-12-07 20:18:49
*  Descripton:  It means just checkint the places with number is ok.
*                I try to use dfs to solve them and TLE...
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int row[9], col[9], sqr[3][3];
    bool check(int x, int y, int val) {
        return !((row[x]>>val)&1) && !((col[y]>>val)&1) && !((sqr[x/3][y/3]>>val)&1);
    }
    void mark(int x, int y, int val) {
        row[x] |= (1<<val);
        col[y] |= (1<<val);
        sqr[x/3][y/3] |= (1<<val);
    }
//    void unmark(int x, int y, int val) {
//        row[x] -= (1<<val);
//        col[y] -= (1<<val);
//        sqr[x/3][y/3] -= (1<<val);
//    }
//    bool dfs(int pos, vector<vector<char> > &board) {
//        // x = pos / 9, y = pos % 9
//        if (pos == 81)
//            return true;
//        if (board[pos/9][pos%9] != '.') {
//            return dfs(pos + 1, board);
//        } else {
//            for (int i = 0; i < 9; i++)
//                if (check(pos/9, pos%9, i)) {
//                    mark(pos/9, pos%9, i);
//                    if (dfs(pos + 1, board))
//                        return true;
//                    unmark(pos/9, pos%9, i);
//                }
//        }
//        return false;
//    }
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        memset(sqr, 0, sizeof(sqr));
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                if (board[i][j] != '.') {
                    if (!check(i, j, board[i][j] - '1'))
                        return false;
                    mark(i, j, board[i][j] - '1');
                }
        return true;
        // return dfs(0, board);
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
    cout << s.isValidSudoku(v) << endl;
    return 0;
}

