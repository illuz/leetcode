/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-01-02 13:48:41
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
    ListNode *rotateRight(ListNode *head, int k) {
        ListNode *tail = NULL, *cur = head;
        int cnt = 0;

        // count number
        while (cur) {
            cnt++;
            tail = cur;
            cur = cur->next;
        }
        if (!cnt || !k)
            return head;
        // k is the count in order
        k = cnt - k % cnt;
        cur = head;
        // find the (k-1)th num
        while (--k) {
            cur = cur->next;
        }
        tail->next = head;
        head = cur->next;
        cur->next = NULL;
        return head;
    }
};

int main() {
    ListNode *head = new ListNode(2);
    Solution s;
    ListNode *ret= s.rotateRight(NULL, 2);
    head->next = new ListNode(3);
    head->next->next = new ListNode(6);
    head = s.rotateRight(head, 2);
    cout << head->val << ' ' << head->next->val << ' '
        << head->next->next->val << endl;
    return 0;
}

