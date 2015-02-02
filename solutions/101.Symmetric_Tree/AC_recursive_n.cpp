/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2014-12-19 08:41:32
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
	bool isSymmetric(TreeNode *p, TreeNode *q) {
		if (p == NULL)
			return q == NULL;
		if (q == NULL)
			return p == NULL;
		if (p->val != q->val)
			return false;
		return isSymmetric(p->left, q->right) &&
			isSymmetric(p->right, q->left);
	}
public:
    bool isSymmetric(TreeNode *root) {
		if (root == NULL)
			return true;
		return isSymmetric(root->left, root->right);
    }
};

int main() {

	return 0;
}

