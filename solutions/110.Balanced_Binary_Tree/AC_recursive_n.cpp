/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2014-12-22 10:40:39
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
private:
    bool balanceFlag;
    int getTreeDepth(TreeNode *root) {
        if (!root || !balanceFlag)
            return 0;
        int sz1 = getTreeDepth(root->left);
        int sz2 = getTreeDepth(root->right);
        if (abs(sz1 - sz2) > 1)
            balanceFlag = false;
        return max(sz1, sz2) + 1;
    }
public:
    bool isBalanced(TreeNode *root) {
        balanceFlag = true;
        getTreeDepth(root);
        return balanceFlag;
    }
};

int main() {

    return 0;
}

