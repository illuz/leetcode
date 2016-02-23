/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2016-02-23 18:49:01
*  Descripton:  Simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            if (head == nullptr || head->next == nullptr) return head;
            ListNode* odd_head = new ListNode(0), *even_head = new ListNode(0);
            ListNode *cur = head, *odd_cur = odd_head, *even_cur = even_head;
            int i = 1;
            while (cur != nullptr) {
                if (i % 2 == 1) {
                    odd_cur->next = cur;
                    odd_cur = cur;
                } else {
                    even_cur->next = cur;
                    even_cur = cur;
                }
                cur = cur->next;
                ++i;
            }
            odd_cur->next = even_head->next;
            even_cur->next = nullptr;
            return odd_head->next;
        }
};

int main() {

    return 0;
}

