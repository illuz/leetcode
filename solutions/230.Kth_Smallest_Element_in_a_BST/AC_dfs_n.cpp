/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2015-08-14 10:21:47
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
    int kthSmallest(TreeNode* root, int k) {
        ans = 0;
        flag = false;
        dfs(root, k);
        return ans;
    }

private:
    int ans;
    bool flag;
    // this return size of a tree
    int dfs(TreeNode* root, int k) {
        // if found the ans
        if (flag) return 0;
        if (root == NULL) return 0;
        int leftsize = dfs(root->left, k);
        if (k - leftsize == 1) {
            ans = root->val;
            flag = true;
        }
        int rightsize = dfs(root->right, k - leftsize - 1);
        return leftsize + rightsize + 1;
    }
};

int main() {

    return 0;
}

