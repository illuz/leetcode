/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2015-03-09 10:07:27
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
    TreeNode *dfs(vector<int> &inorder, vector<int> &postorder, int is, int ps, int len) {
        if (len <= 0)
            return 0;
        TreeNode *root = new TreeNode(postorder[ps]);
        for (int i = 0; i < len; ++i) {
            if (inorder[is - i] == root->val) {
                root->right = dfs(inorder, postorder, is, ps - 1, i);
                root->left = dfs(inorder, postorder, is - i - 1, ps - i - 1, len - i - 1);
                break;
            }
        }
        return root;
    }
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return dfs(inorder, postorder, inorder.size() - 1, postorder.size() - 1, inorder.size());
    }
};

int main() {

	return 0;
}

