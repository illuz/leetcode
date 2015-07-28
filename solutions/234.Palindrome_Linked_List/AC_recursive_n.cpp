/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2015-07-28 23:56:22
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
        int len = 0;
        ListNode *cur = head;
        while (cur != NULL) {
            ++len;
            cur = cur->next;
        }
        cur = head;
        return isPalindromeHelper(cur, len);
    }
private:
    bool isPalindromeHelper(ListNode* &head, int len) {
        if (len < 2) return true;
        if (len == 2) {
            int head_val = head->val;
            head = head->next;
            int tail_val = head->val;
            return head_val == tail_val;
        }
        int head_val = head->val;
        head = head->next;
        if (!isPalindromeHelper(head, len - 2))
            return false;
        head = head->next;
        int tail_val = head->val;
        return head_val == tail_val;
    }
};

int main() {
    Solution s;
    ListNode l1(1);
    ListNode l2(2);
    ListNode l3(3);
    ListNode l4(3);
    ListNode l5(2);
    ListNode l6(1);
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

