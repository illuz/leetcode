/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-18 11:01:05
*  Descripton:  simulation
*/

#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL)
            return head;
        ListNode *cur = head, *tmp;
        while (cur->next != NULL) {
            if (cur->val == cur->next->val) {
                tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else
                cur = cur->next;
        }
        return head;
    }
};

int main() {
    return 0;
}

