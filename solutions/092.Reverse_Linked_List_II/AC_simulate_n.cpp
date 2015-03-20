/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulate_n.cpp
*  Create Date: 2015-01-07 09:50:29
*  Descripton:  Use two points, one points to the (m-1)-th,
*               another points to the (m+i)th
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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode *mhead = new ListNode(0), *prev, *cur;
        mhead->next = head;    // because m will be 0
        for (int i = 0; i < m - 1; i++) {
            mhead = mhead->next;
        }

        prev = mhead->next;
        cur = prev->next;
        for (int i = m; i < n; i++) {
            prev->next = cur->next;
            cur->next = mhead->next;
            mhead->next = cur;
            cur = prev->next;
        }
        return m == 1 ? mhead->next : head;
    }
};


int main() {

    return 0;
}

