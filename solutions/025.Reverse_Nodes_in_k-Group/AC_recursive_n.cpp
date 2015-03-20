/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2015-01-15 20:45:27
*  Descripton:  Count k nodes and recursive
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
    ListNode *reverseKGroup(ListNode *head, int k) {
        if (!head || !(head->next) || k < 2)
            return head;
        
        // count k nodes
        ListNode *nextgp = head;
        for (int i = 0; i < k; i++)
            if (nextgp)
                nextgp = nextgp->next;
            else
                return head;

        // reverse
        ListNode *prev = NULL, *cur = head, *next = NULL;
        while (cur != nextgp) {
            next = cur->next;
            if (prev)
                cur->next = prev;
            else
                cur->next = reverseKGroup(nextgp, k);
            prev = cur;
            cur = next;
        }
        return prev;
    }
};

int main() {

    return 0;
}

