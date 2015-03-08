/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_threaded_binary_tree_n.cpp
*  Create Date: 2015-03-08 23:51:26
*  Descripton:  Use the Threaded Binary Tree presented by Morris.
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
public:
    void recoverTree(TreeNode *root) {
        TreeNode *f1 = NULL, *f2 = NULL;
        TreeNode *cur, *pre, *pre_o;

        if (!root)
            return;

        bool found = false;
        cur = root;
        while (cur) {
            if (!cur->left) {
                // begin
                if (pre_o && pre_o->val > cur->val) {
                    if (!found) {
                        f1 = pre_o;
                        found = true;
                    }
                    f2 = cur;
                }
                pre_o = cur;
                // end
                cur = cur->right;
            } else {
                pre = cur->left;
                while (pre->right && pre->right != cur)
                    pre = pre->right;

                if (!pre->right) {
                    pre->right = cur;
                    cur = cur->left;
                } else {
                    pre->right = NULL;
                    // begin
                    if (pre_o && pre_o->val > cur->val) {
                        if (!found) {
                            f1 = pre_o;
                            found = true;
                        }
                        f2 = cur;
                    }
                    pre_o = cur;
                    // end
                    cur = cur->right;
                }
            }
        }
        if (f1 && f2)
            swap(f1->val, f2->val);
    }
};

int main() {

    return 0;
}

