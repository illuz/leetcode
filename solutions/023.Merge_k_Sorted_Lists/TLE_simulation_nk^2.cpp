/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_simulation_nk^2.cpp
*  Create Date: 2015-01-14 14:51:46
*  Descripton:  Use the Merge Two Sorted Lists
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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if (lists.size() == 0)
            return NULL;
        ListNode *p = lists[0];
        for (int i = 1; i < lists.size(); i++) {
            p = mergeTwoLists(p, lists[i]);
        }
        return p;
    }

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;

        ListNode *start, *p1;

        if (l1->val < l2->val) {
            p1 = start = l1;
            l1 = l1->next;
        } else {
            p1 = start = l2;
            l2 = l2->next;
        }
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                p1->next = l1;
                p1 = l1;
                l1 = l1->next;
            } else {
                p1->next = l2;
                p1 = l2;
                l2 = l2->next;
            }
        }
        if (l1 != NULL)
            p1->next = l1;
        else
            p1->next = l2;
        return start;
    }
};

int main() {

    return 0;
}

