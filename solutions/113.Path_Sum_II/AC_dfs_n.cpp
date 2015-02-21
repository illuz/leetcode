/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2015-02-21 08:30:54
*  Descripton:  Depth-first search
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
	void dfs(TreeNode *root, int rest, vector<int> &path,
			vector<vector<int> > &res) {
		if (root == NULL)
			return;
		path.push_back(root->val);
		rest -= root->val;
		if (root->left == NULL && root->right == NULL) {
			if (rest == 0)
				res.push_back(path);
		} else {
			if (root->left)
				dfs(root->left, rest, path, res);
			if (root->right)
				dfs(root->right, rest, path, res);
		}
		path.pop_back();
	}
public:
	vector<vector<int> > pathSum(TreeNode *root, int sum) {
		vector<vector<int> > res;
		vector<int> path;
		dfs(root, sum, path, res);
		return res;
	}
};

int main() {

	return 0;
}

