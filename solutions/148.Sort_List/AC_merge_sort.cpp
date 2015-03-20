/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_merge_sort.cpp
*  Create Date: 2015-03-20 10:01:27
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
private:
    int count_size(ListNode *node) {
        int sz = 0;
        while (node != NULL) {
            node = node->next;
            ++sz;
        }
        return sz;
    }

public:
    ListNode *sortList(ListNode *head) {
        // add dummy
        ListNode dummy(0);
        dummy.next = head;

        int sz = count_size(head);
        int block_size = 1;
        int last_index(0);
        int alen(0), blen(0);

        ListNode *prev(NULL), *cur(NULL);
        ListNode *A(NULL), *B(NULL);    // the compare groups iter
        ListNode *tmp(NULL);

        while (block_size < sz) {
            last_index = 0;     // the index of solved last
            prev = &dummy;
            cur = dummy.next;   // because the head will change

            // solve
            while (last_index < sz) {
                // get length of block A and B.
                alen = min(sz - last_index, block_size);
                blen = min(sz - last_index - alen, block_size);
                if (blen == 0)
                    break;

                // get the block A and B
                A = cur;

                for (int i = 0; i < alen - 1; ++i)
                    cur = cur->next;
                B = cur->next;
                cur->next = NULL;    // cut A-B
                cur = B;

                for (int i = 0; i < blen - 1; ++i)
                    cur = cur->next;
                tmp = cur->next;
                cur->next = NULL;    // cut B-[tmp]
                cur = tmp;

                // merge A and B
                while (A != NULL || B != NULL) {
                    if (B == NULL || (A != NULL && A->val <= B->val)) {
                        prev->next = A;
                        prev = prev->next;
                        A = A->next;
                    } else {
                        prev->next = B;
                        prev = prev->next;
                        B = B->next;
                    }
                }

                prev->next = cur;
                last_index += alen + blen;
            }
            block_size <<= 1;
        }
        return dummy.next;
    }
};

int main() {
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(4);
    Solution s;
    head = s.sortList(head);
    cout << head->val;
    cout << head->next->val;
    cout << head->next->next->val;
    return 0;
}

