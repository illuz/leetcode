/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursion_n.cpp
*  Create Date: 2015-01-02 14:08:27
*  Descripton:  recursioin
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
    void orderHelper(vector<int> &res, TreeNode *cur) {
        if (!cur)
            return;
        if (cur->left)
            orderHelper(res, cur->left);
        res.push_back(cur->val);
        if (cur->right)
            orderHelper(res, cur->right);
    }
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        orderHelper(res, root);
        return res;
    }
};

int main() {

    return 0;
}

