/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2014-12-19 09:03:10
*  Descripton:  recursive
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
    bool hasPathSum(TreeNode *root, int sum) {
		if (root == NULL)
			return false;
		if (!root->left && !root->right)
			return sum == root->val;
		return hasPathSum(root->left, sum - root->val) ||
			hasPathSum(root->right, sum - root->val);
	}
};


int main() {

	return 0;
}

