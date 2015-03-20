/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bfs_n.cpp
*  Create Date: 2015-03-09 09:01:15
*  Descripton:  Bfs and use queue. Just like the 107.Binary_Tree_Level_Order_Traversal_II
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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        queue<TreeNode *> q;
        vector<vector<int> > res;
        vector<int> tmpv;
        TreeNode *front;
        
        if (root == NULL)
            return res;

        // bfs
        q.push(root);
        q.push(NULL);    // NULL is the seperator of levels
        while (!q.empty()) {
            front = q.front();
            q.pop();
            if (front) {
                tmpv.push_back(front->val);
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            } else if (!tmpv.empty()) {
                res.push_back(tmpv);
                tmpv.clear();
                q.push(NULL);
            }
        }

        // reverse the result
        for (int i = 0; i < res.size(); ++i)
            if (i & 1)
                reverse(res[i].begin(), res[i].end());
        return res;
    }
};

int main() {

    return 0;
}

