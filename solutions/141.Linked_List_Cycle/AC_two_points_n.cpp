/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n.cpp
*  Create Date: 2015-01-05 11:11:10
*  Descripton:  two points.
*               one step and two steps
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
    bool hasCycle(ListNode *head) {
        ListNode *p1 = head, *p2 = head;
        while (1) {
            if (p1) p1 = p1->next;
            else return false;
            if (p2) p2 = p2->next;
            else return false;
            if (p2) p2 = p2->next;
            else return false;

            if (p1 == p2)
                return true;
        }
    }
};

int main() {

    return 0;
}

