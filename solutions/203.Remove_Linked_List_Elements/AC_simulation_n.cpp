/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-04-23 22:29:40
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* cur = &dummy;

        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                ListNode* dup = cur->next;
                cur->next = dup->next;
                delete dup;
            } else {
                cur = cur->next;
            }
        }

        return dummy.next;
    }
};

int main() {

    return 0;
}

