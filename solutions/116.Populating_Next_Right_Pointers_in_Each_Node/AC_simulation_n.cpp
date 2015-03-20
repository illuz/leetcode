/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-02-22 09:56:58
*  Descripton:  Link children layer by layer, O(1) space
*               The code can accept in II version.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

// Definition for binary tree with next pointer.
struct TreeLinkNode {
 int val;
 TreeLinkNode *left, *right, *next;
 TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode header(0);
        header.next = root;
        TreeLinkNode *cur, *prev;
        while (header.next) {
            // current header's link is already populated
            // following will make a new children-link to header
            cur = header.next;
            prev = &header;
            header.next = nullptr;
            for (; cur; cur = cur->next) {
                if (cur->left != nullptr) {
                    prev->next = cur->left;
                    prev = prev->next;
                }
                if (cur->right != nullptr) {
                    prev->next = cur->right;
                    prev = prev->next;
                }
            }
        }
    }
};

int main() {
    TreeLinkNode root(1);
    Solution s;
    s.connect(&root);
    return 0;
}

