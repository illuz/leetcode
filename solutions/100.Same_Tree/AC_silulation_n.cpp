/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_silulation_n.cpp
*  Create Date: 2014-12-19 08:34:19
*  Descripton:  simulation
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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == NULL)
            return q == NULL;
        if (q == NULL)
            return p == NULL;
        if (p->val != q->val)
            return false;
        return isSameTree(p->left, q->left) &&
            isSameTree(p->right, q->right);
    }
};

int main() {

    return 0;
}

