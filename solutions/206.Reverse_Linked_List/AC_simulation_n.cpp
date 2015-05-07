/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-05-07 22:24:05
*  Descripton:   
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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode *prev = head, *cur = head->next;

        while (cur) {
            prev->next = cur->next;
            cur->next = dummy.next;
            dummy.next = cur;
            cur = prev->next;
        }
        return dummy.next;
    }
};

int main() {

    return 0;
}

