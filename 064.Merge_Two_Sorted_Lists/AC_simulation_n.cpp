/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-08 15:59:41
*  Descripton:  simulation. Just like one step in merge sort.
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
		ListNode *start, *p1, *p2;
		if (l1->val < l2->val)
			start = l1;
		else
			start = l2;
		while (p1 != NULL && p2 != NULL) {
			if (p1->val < p2->val)
		}
    }
};

int main() {

	return 0;
}

