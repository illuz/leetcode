/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-03-09 10:21:14
*  Descripton:  Just simulation.
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
    TreeNode *dfs(vector<int> &num, int left, int right) {
        if (left > right)
            return NULL;

        int mid = (left + right) / 2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = dfs(num, left, mid - 1);
        root->right = dfs(num, mid + 1, right);
    }
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return dfs(num, 0, num.size() - 1);
    }
};

int main() {

    return 0;
}

