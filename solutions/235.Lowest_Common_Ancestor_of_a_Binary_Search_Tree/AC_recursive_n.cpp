/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2015-07-30 09:29:20
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((p->val <= root->val && q->val >= root->val) || (q->val <= root->val && p->val >= root->val)) {
            return root;
        } else if(p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else {
            return lowestCommonAncestor(root->right, p, q);
        }
    }
};

int main() {

    return 0;
}

