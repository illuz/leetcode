/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-01-07 10:09:55
*  Descripton:  1. Using slow-fast points to cut the list into two parts
*               2. Reserve the second part
*               3. Merge
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

class Solution {
public:
    void reorderList(ListNode *head) {
        if (!head || !head->next || !head->next->next)
            return;

        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reserve
        ListNode *mhead = slow, *pre = mhead->next;
        if (pre) {
            ListNode *cur = pre->next;
            while (cur) {
                pre->next = cur->next;
                cur->next = mhead->next;
                mhead->next = cur;
                cur = pre->next;
            }
        }

        // merge
        mhead = slow->next;
        slow->next = NULL;
        while (head && mhead) {
            ListNode *tmp = head->next;
            head->next = mhead;
            mhead = mhead->next;
            head->next->next = tmp;
            head = tmp;
        }
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    Solution s;
    s.reorderList(head);
    return 0;
}

