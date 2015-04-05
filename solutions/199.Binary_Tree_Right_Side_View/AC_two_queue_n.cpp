/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_queue_n.cpp
*  Create Date: 2015-04-05 09:17:30
*  Descripton:  Use two queue to implement level order.
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
public:
    vector<int> rightSideView(TreeNode *root) {
        queue<TreeNode *> pre;
        vector<int> ret;

        if (!root) return ret;

        pre.push(root);
        while (!pre.empty()) {
            ret.push_back(pre.front()->val);
            queue<TreeNode *> cur;
            while (!pre.empty()) {
                if (pre.front()->right)
                    cur.push(pre.front()->right);
                if (pre.front()->left)
                    cur.push(pre.front()->left);
                pre.pop();
            }
            swap(pre, cur);
        }
        
        return ret;
    }
};

int main() {

    return 0;
}

