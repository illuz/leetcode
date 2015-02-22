/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-02-22 10:45:21
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    // Definition for binary tree with next pointer.
    public class TreeLinkNode {
        int val;
        TreeLinkNode left, right, next;
        TreeLinkNode(int x) { val = x; }
    }

    public void connect(TreeLinkNode root) {
        TreeLinkNode header = new TreeLinkNode(0);
        header.next = root;
        TreeLinkNode cur, prev;
        while (header.next != null) {
            // current header's link is already populated
            // following will make a new children-link to header
            cur = header.next;
            prev = header;
            header.next = null;
            for (; cur != null; cur = cur.next) {
                if (cur.left != null) {
                    prev.next = cur.left;
                    prev = prev.next;
                }
                if (cur.right != null) {
                    prev.next = cur.right;
                    prev = prev.next;
                }
            }
        }
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
