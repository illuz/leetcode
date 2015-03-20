/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-20 10:32:06
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int alen = 0, blen = 0;
        ListNode *tmpA = headA, *tmpB = headB;

        // get the length of A, B
        while (tmpA != NULL) {
            alen++;
            tmpA = tmpA->next;
        }
        while (tmpB != NULL) {
            blen++;
            tmpB = tmpB->next;
        }
        if (tmpA || tmpB)
            return NULL;

        // set A be the longer one
        if (alen < blen) {
            swap(headA, headB);
            swap(alen, blen);
        }

        tmpA = headA;
        tmpB = headB;
        // cut A
        while (alen > blen) {
            alen--;
            tmpA = tmpA->next;
        }
        while (blen--) {
            if (tmpA == tmpB)
                return tmpA;
            tmpA = tmpA->next;
            tmpB = tmpB->next;
        }
        return NULL;
    }
};

int main() {

    return 0;
}

