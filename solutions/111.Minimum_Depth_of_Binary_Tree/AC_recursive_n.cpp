/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2014-12-19 08:53:56
*  Descripton:  recursive 
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
    int minDepth(TreeNode *root) {
        if (root == NULL)
            return 0;
        int dl = minDepth(root->left);
        int dr = minDepth(root->right);
        if (dl == 0)
            return dr + 1;
        if (dr == 0)
            return dl + 1;
        return min(dr + 1, dl + 1);
    }
};

int main() {

    return 0;
}

