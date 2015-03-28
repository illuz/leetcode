/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_O1_space_n.java
*  Create Date: 2015-03-28 15:10:21
*  Descripton:   
*/

import java.util.*;

public class Solution {

    // Definition for singly-linked list with a random pointer.
    class RandomListNode {
        int label;
        RandomListNode next, random;
        RandomListNode(int x) { this.label = x; }
    }

    public RandomListNode copyRandomList(RandomListNode head) {
        if (head == null) {
            return null;
        }

        // 1, 1-2-3 to 1-1-2-2-3-3
        RandomListNode cur = head;
        while (cur != null) {
            // generate
            RandomListNode newNode = new RandomListNode(cur.label);
            newNode.next = cur.next;
            cur.next = newNode;
            // next
            cur = cur.next.next;
        }

        // 2, copy random
        cur = head;
        while (cur != null) {
            if (cur.random != null) {
                cur.next.random = cur.random.next;
            }
            cur = cur.next.next;
        }

        // 3, split
        RandomListNode newHead = head.next, tmpNode;
        cur = head;
        while (cur != null) {
            tmpNode = cur.next;
            cur.next = cur.next.next;
            if (tmpNode.next != null) {
                tmpNode.next = tmpNode.next.next;
            }

            // remember now the cur is recovered
            cur = cur.next;
        }

        return newHead;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
