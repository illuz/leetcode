/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.cpp
*  Create Date: 2015-07-19 15:27:43
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
    void deleteNode(ListNode* node) {
        ListNode *next = node->next;
        *node = *next;
        // this statement is equivalent to
        // node->val = next->val;
        // node->next = next->next;
        delete next;
    }
};

int main() {

    return 0;
}

