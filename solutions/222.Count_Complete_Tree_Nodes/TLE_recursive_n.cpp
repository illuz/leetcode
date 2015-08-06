/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_recursive_n.cpp
*  Create Date: 2015-08-06 09:42:53
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
        if (root) {
            return countNodes(root->left) + countNodes(root->right);
        }
        return 0;
    }
};

int main() {

    return 0;
}

