/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_point_n.cpp
*  Create Date: 2015-03-09 10:38:49
*  Descripton:  Use two points.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        if (!head)
            return NULL;
        if (!head->next)
            return new TreeNode(head->val);

        // two points
        ListNode *fast = head, *slow = head, *pre = NULL;
        while (slow && fast && fast->next) {
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (pre)
            pre->next = NULL; // warning: this will change the origin list

        TreeNode *root = new TreeNode(slow->val);
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);

        return root;
    }
};

int main() {
    ListNode a(0);
    Solution s;
    s.sortedListToBST(&a);
    return 0;
}

