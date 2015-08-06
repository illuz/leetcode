/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_lognlogn.cpp
*  Create Date: 2015-08-06 09:56:20
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
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        int left_depth = getLeftDepth(root);
        int right_depth = getRightDepth(root);
        if (left_depth == right_depth) {
            return (1 << left_depth) - 1;
        } else {
            return countNodes(root->left) + countNodes(root->right) + 1;
        }
    }

private:
    int getRightDepth(TreeNode* root) {
        if (root) return getRightDepth(root->right) + 1;
        return 0;
    }
    int getLeftDepth(TreeNode* root) {
        if (root) return getLeftDepth(root->left) + 1;
        return 0;
    }
};

int main() {
    TreeNode root(0);
    TreeNode l1(0);
    TreeNode l2(0);
    TreeNode l3(0);
    TreeNode l4(0);
    TreeNode l5(0);
    Solution s;
    cout << s.countNodes(&root) << endl;
    root.left = &l1;
    cout << s.countNodes(&root) << endl;
    root.right = &l2;
    cout << s.countNodes(&root) << endl;
    l1.left = &l3;
    cout << s.countNodes(&root) << endl;
    l1.right = &l4;
    cout << s.countNodes(&root) << endl;
    l2.left = &l5;
    cout << s.countNodes(&root) << endl;
    return 0;
}

