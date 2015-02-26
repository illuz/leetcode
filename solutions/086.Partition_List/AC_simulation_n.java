/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-02-26 11:25:32
*  Descripton:   
*/

import java.util.Scanner;

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

    public ListNode partition(ListNode head, int x) {
        ListNode dump = new ListNode(0);
        dump.next = head;
        ListNode cur = dump, par, rec;
        while (cur.next != null && cur.next.val < x)
            cur = cur.next;
        par = cur;		// the end of first part
        rec = cur.next;// the begin of second part
        while (cur.next != null) {
            if (cur.next.val < x) {
                par = (par.next = cur.next);
                cur.next = cur.next.next;
                par.next = rec;
            } else
                cur = cur.next;
        }
        return dump.next;
    }


    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
