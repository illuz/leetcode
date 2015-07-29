/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_reverse_1.cpp
*  Create Date: 2015-07-29 11:49:16
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
    bool isPalindrome(ListNode* head) {
        int sz = get_length(head);
        if (sz < 2)
            return true;

        // reverse half
        ListNode *new_head = reverseBetween(head, 1, sz / 2);

        ListNode *head1 = new_head, *head2;
        // now the head is point to (sz/2)th node
        if (sz % 2 == 1) {
            head2 = head->next->next;
        } else {
            head2 = head->next;
        }
        bool ok = true;
        for (int i = 0; i < sz / 2; ++i) {
            if (head1->val != head2->val) {
                ok = false;
                break;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        // reverse half again
        reverseBetween(new_head, 1, sz / 2);
        return ok;
    }

private:
    int get_length(ListNode* head) {
        int sz = 0;
        while (head) {
            ++sz;
            head = head->next;
        }
        return sz;
    }

    // these codes are the same as https://github.com/illuz/leetcode/blob/master/solutions/092.Reverse_Linked_List_II/AC_simulate_n.cpp
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
    Solution s;
    ListNode l1(1);
    ListNode l2(2);
    ListNode l3(2);
    ListNode l4(1);
    ListNode l5(2);
    ListNode l6(1);
    cout << s.isPalindrome(&l1) << endl;
    l1.next = &l2;
    cout << s.isPalindrome(&l1) << endl;
    l2.next = &l3;
    cout << s.isPalindrome(&l1) << endl;
    l3.next = &l4;
    cout << s.isPalindrome(&l1) << endl;
    l4.next = &l5;
    cout << s.isPalindrome(&l1) << endl;
    l5.next = &l6;
    cout << s.isPalindrome(&l1) << endl;
    return 0;
}

