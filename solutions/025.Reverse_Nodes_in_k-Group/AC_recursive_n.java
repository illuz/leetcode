/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.java
*  Create Date: 2015-03-05 14:59:35
*  Descripton:   
*/

import java.util.*;

public class Solution {

    // Definition for singly-linked list.
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) {
            val = x;
            next = null;
        }
    }

    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode cur = head;
        int cnt = 0;
        // get next group
        while (cur != null && cnt != k) {
            cur = cur.next;
            cnt++;
        }
        if (cnt == k) {
            cur = reverseKGroup(cur, k);
            // reverse
            while (0 <= --cnt) {
                ListNode tmp = head.next;
                head.next = cur;
                cur = head;
                head = tmp;
            }
            head = cur;
        }
        return head;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
