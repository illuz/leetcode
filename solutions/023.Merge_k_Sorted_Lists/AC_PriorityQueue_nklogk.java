/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_PriorityQueue_nklogk.java
*  Create Date: 2015-03-05 10:58:27
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

    public ListNode mergeKLists(List<ListNode> lists) {
        Queue<ListNode> heap = new PriorityQueue<ListNode>(new Comparator<ListNode>(){
            @Override public int compare(ListNode l1, ListNode l2) {
                return l1.val - l2.val;
            }
        });

        ListNode dummy = new ListNode(0), cur = dummy, tmp;
        for (ListNode list : lists) {
            if (list != null) {
                heap.offer(list);
            }
        }
        while (!heap.isEmpty()) {
            tmp = heap.poll();
            cur.next = tmp;
            cur = cur.next;
            if (tmp.next != null) {
                heap.offer(tmp.next);
            }
        }
        return dummy.next;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
