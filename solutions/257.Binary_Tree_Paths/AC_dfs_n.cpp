/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2015-08-16 09:59:42
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        vector<int> path;
        dfs(root, path, ans);
        return ans;
    }

private:
    void dfs(TreeNode* root, vector<int> &path, vector<string> &ans) {
        if (!root) return;
        path.push_back(root->val);
        if (!root->left && !root->right)
            ans.push_back(getString(path));
        dfs(root->left, path, ans);
        dfs(root->right, path, ans);
        path.pop_back();
    }
    string getString(vector<int> path) {
        if (path.empty()) return "";
        string ret;
        for (int i = 0; i < path.size() - 1; ++i)
            ret += to_string(path[i]) + "->";
        ret += to_string(path[path.size() - 1]);
        return ret;
    }
};

int main() {

    return 0;
}

