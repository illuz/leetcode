/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-07-29 11:45:55
*  Descripton:   
*/


import java.util.*;


// Definition for singly-linked list.
public class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

public class Solution {
    public boolean isPalindrome(ListNode head) {
        List<Integer> list = new ArrayList<Integer>();
        while (head != null) {
            list.add(head.val);
            head = head.next;
        }
        int left = 0, right = list.size() - 1;
        while (left < right) {
            if (list.get(left).equals(list.get(right)))
                return false;
            ++left;
            --right;
        }
        return true;
    }
}

public class Test {
    public static void main(String[] args) {
        Solution s = new Solution();
        ListNode l1 = new ListNode(-18411);
        ListNode l2 = new ListNode(-18411);
        l1.next = l2;
        System.out.println(s.isPalindrome(l1));
    }
}

