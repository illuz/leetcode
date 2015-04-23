/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.java
*  Create Date: 2015-04-23 23:04:54
*  Descripton:   
*/

import java.util.*;

public class Solution {

    // Definition for singly-linked list.
    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }

    public ListNode removeElements(ListNode head, int val) {
        if (head == null) {
            return null;
        }
        head.next = removeElements(head.next, val);
        if (head.val == val) {
            return head.next;
        } else {
            return  head;
        }
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {2};
        System.out.println(00010);
    }
}

