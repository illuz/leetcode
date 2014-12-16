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

ListNode *l1, *l2, *ll1, *ll2;
int main() {
	int n1, n2;
	Solution s;
	cin >> n1;
	ll1 = l1 = new ListNode(0);
	for (int i = 0; i < n1; i++) {
		l1->next = new ListNode(0);
		l1 = l1->next;
		scanf("%d", &(l1->val));
	}
	cin >> n2;
	ll2 = l2 = new ListNode(0);
	for (int i = 0; i < n2; i++) {
		l2->next = new ListNode(0);
		l2 = l2->next;
		scanf("%d", &(l2->val));
	}
	ListNode *res = s.mergeTwoLists(ll1->next, ll2->next);
	while (res != NULL) {
		cout << res->val << ' ';
		res = res->next;
	}

	return 0;
}

