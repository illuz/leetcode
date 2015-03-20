/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n2.cpp
*  Create Date: 2015-01-05 09:24:46
*  Descripton:  simulation
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
    ListNode *insertionSortList(ListNode *head) {
        if (!head || !head->next)
            return head;
        ListNode *prev = head,
                 *cur = head->next,
                 *next = cur->next,
                 *tmp;
        while (cur) {
            if (cur->val <= head->val) {
                // insert to head
                if (prev == head) {
                    head->next = next;
                    cur->next = head;
                    head = cur;
                } else {
                    cur->next = head;
                    head = cur;
                    prev->next = next;
                }
            } else {
                // find and insert
                tmp = head;
                while (tmp->next->val < cur->val) {
                    tmp = tmp->next;
                }
                if (tmp->next != cur) {
                    cur->next = tmp->next;
                    tmp->next = cur;
                    prev->next = next;
                } else
                    prev = cur;
            }
            cur = next;
            if (next)
                next = next->next;
        }
        return head;
    }
};

int main() {
    ListNode *head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    Solution s;
    head = s.insertionSortList(head);
    return 0;
}

