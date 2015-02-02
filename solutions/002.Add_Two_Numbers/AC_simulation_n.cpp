/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-11-28 08:36:27
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

ListNode *addValAndCreateNewNode(ListNode *cur, int val) {
	cur->val = val;
	cur->next = new ListNode(0);
	return cur->next;
}

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode *ret = new ListNode(0);
		ListNode *cur = ret;
		int sum = 0;
		while (1) {
			if (l1 != NULL) {
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2 != NULL) {
				sum += l2->val;
				l2 = l2->next;
			}
			cur->val = sum % 10;
			sum /= 10;
			if (l1 != NULL || l2 != NULL || sum)
				cur = (cur->next = new ListNode(0));
			else
				break;
		}
		return ret;
    }
};

int main() {
	int t, n;
	Solution s;
	while (cin >> n) {
		ListNode *a = new ListNode(0), *b = new ListNode(0);
	  	ListNode *pa = a, *pb = b;
		while (n--) {
			cin >> t;
			pa = addValAndCreateNewNode(pa, t);
		}
		cin >> n;
		while (n--) {
			cin >> t;
			pb = addValAndCreateNewNode(pb, t);
		}
		s.addTwoNumbers(a, b);	// use gdb to debug
		// a & b will not release!
	}
	return 0;
}

