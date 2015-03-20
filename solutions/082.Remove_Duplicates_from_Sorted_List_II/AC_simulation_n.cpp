/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-30 11:26:39
*  Descripton:  add a HEAD node in the link and deal
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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *ret = new ListNode(head->val - 1);
        ListNode *cur = ret, *tmp;
        bool ifDel = false;    // if the cur->next should be deleted

        // add addition to the link
        ret->next = head;

        while (cur->next != NULL && cur->next->next != NULL) {
            if (cur->next->val == cur->next->next->val) {
                tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
                ifDel = true;
            } else if (ifDel) {
                tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
                ifDel = false;
            } else {
                cur = cur->next;
            }
        }

        if (ifDel) {
            tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        }

        // delete the addition head
        tmp = ret;
        ret = ret->next;
        delete tmp;

        return ret;
    }
};

int main() {

    return 0;
}

