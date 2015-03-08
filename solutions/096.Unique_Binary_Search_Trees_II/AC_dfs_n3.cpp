/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n3.cpp
*  Create Date: 2015-03-08 20:55:07
*  Descripton:  Just like the I version said.
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
    vector<TreeNode *> generate(int op, int ed) {
        vector<TreeNode *> ret;
        if (op > ed) {
            ret.push_back(NULL);
            return ret;
        }

        vector<TreeNode *> left, right;
        for (int k = op; k <= ed; ++k) {
            left = generate(op, k - 1);
            right = generate(k + 1, ed);

            for (auto &i : left)
                for (auto &j : right) {
                    TreeNode *root = new TreeNode(k);
                    root->left = i;
                    root->right = j;
                    ret.push_back(root);
                }
        }

        return ret;
    }
public:
    vector<TreeNode *> generateTrees(int n) {
        return generate(1, n);
    }
};

int main() {

    return 0;
}

