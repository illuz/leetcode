/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n2m2.cpp
*  Create Date: 2015-02-14 09:46:37
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    bool dfs(vector<vector<char> > &board, int x, int y,
            string word, int idx,
            vector<vector<bool> > &vis) {
        if (idx == word.length())
            return true;
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() ||
                vis[x][y] || board[x][y] != word[idx])
            return false;
        vis[x][y] = true;
        bool ret =
            dfs(board, x + 1, y, word, idx + 1, vis) ||
            dfs(board, x - 1, y, word, idx + 1, vis) ||
            dfs(board, x, y + 1, word, idx + 1, vis) ||
            dfs(board, x, y - 1, word, idx + 1, vis);
        vis[x][y] = false;
        return ret;
    }
public:
    bool exist(vector<vector<char> > &board, string word) {
        if (board.empty() || board[0].empty())
            return word == "";
        int n = board.size(), m = board[0].size();
        vector<vector<bool> > vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (dfs(board, i, j, word, 0, vis))
                    return true;
        return false;
    }
};

int main() {
    int n, m;
    string w;
    Solution s;
    cin >> n >> m;
    vector<vector<char> > b(n, vector<char>(m));
    for (auto &i : b)
        for (auto &j : i)
            cin >> j;
    while (cin >> w)
        cout << s.exist(b, w) << endl;
    return 0;
}

