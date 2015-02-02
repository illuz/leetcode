/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2015-01-04 10:06:53
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
	int sum;
	void dfs(TreeNode *cur, int num) {
		num = num * 10 + cur->val;
		if (!cur->left && !cur->right) {
			sum += num;
			return;
		}
		if (cur->left)
			dfs(cur->left, num);
		if (cur->right)
			dfs(cur->right, num);
	}
public:
	int sumNumbers(TreeNode *root) {
		if (!root)
			return 0;
		sum = 0;
		dfs(root, 0);
		return sum;
	}
};

int main() {

	return 0;
}

