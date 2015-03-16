/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_pre_inorder_n.cpp
*  Create Date: 2015-03-16 10:07:47
*  Descripton:   
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

class BSTIterator {
private:
    queue<int> in_res;
    void inorder(TreeNode *root) {
        if (root != NULL) {
            inorder(root->left);
            in_res.push(root->val);
            inorder(root->right);
        }
    }

public:
    BSTIterator(TreeNode *root) {
        // generate the inorder list
        while (!in_res.empty())
            in_res.pop();
        inorder(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return in_res.size() != 0;
    }

    /** @return the next smallest number */
    int next() {
        int front = in_res.front();
        in_res.pop();
        return front;
    }
};

int main() {
    BSTIterator i = BSTIterator(root);
    while (i.hasNext()) cout << i.next();
    return 0;
}


