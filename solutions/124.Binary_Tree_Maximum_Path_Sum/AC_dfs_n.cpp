/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2015-03-21 10:52:46
*  Descripton:   
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
    int ret;
    int dfs(TreeNode *root) {
        if (root == NULL)
            return 0;
        int left_sum = max(0, dfs(root->left));
        int right_sum = max(0, dfs(root->right));
        ret = max(ret, left_sum + right_sum + root->val);
        return max(left_sum, right_sum) + root->val;
    }

public:
    int maxPathSum(TreeNode *root) {
        ret = INT_MIN;
        dfs(root);
        return ret;
    }
};

int main() {

    return 0;
}

