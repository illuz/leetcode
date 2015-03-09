/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2015-03-09 09:39:56
*  Descripton:  Just simulation.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    TreeNode *dfs(vector<int> &preorder, vector<int> &inorder, int ps, int is, int len) {
        if (len <= 0)
            return NULL;
        TreeNode *root = new TreeNode(preorder[ps]);
        for (int i = 0; i < len; ++i) {
            if (inorder[is + i] == root->val) {
                root->left = dfs(preorder, inorder, ps + 1, is, i);
                root->right = dfs(preorder, inorder, ps + i + 1, is + i + 1, len - i - 1);
                break;
            }
        }
        return root;
    }
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return dfs(preorder, inorder, 0, 0, preorder.size());
    }
};

int main() {
    vector<int> p = {1, 2, 3};
    vector<int> i = {1, 2, 3};
    Solution s;
    s.buildTree(p, i);
	return 0;
}

