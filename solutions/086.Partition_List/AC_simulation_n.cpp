/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-02-26 10:47:24
*  Descripton:   
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
    ListNode *partition(ListNode *head, int x) {
        ListNode dump(0);
        dump.next = head;
        ListNode *cur = &dump, *par, *rec;
        while (cur->next != NULL && cur->next->val < x)
            cur = cur->next;
        par = cur;        // the end of first part
        rec = cur->next;// the begin of second part
        while (cur->next != NULL) {
            if (cur->next->val < x) {
                par = (par->next = cur->next);
                cur->next = cur->next->next;
                par->next = rec;
            } else
                cur = cur->next;
        }
        return dump.next;
    }
};

int main() {
    ListNode *head = new ListNode(2);
    head->next = new ListNode(1);
    Solution s;
    s.partition(head, 2);
    return 0;
}

