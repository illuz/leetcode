/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n.java
*  Create Date: 2015-03-10 14:47:50
*  Descripton:   
*/

import java.util.*;

public class Solution {

    // Definition for binary tree
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x) { val = x; }
    }

    public void flatten(TreeNode root) {
        if (root == null) {
            return;
        }

        Stack<TreeNode> stack = new Stack<TreeNode>();
        stack.push(root);
        while (!stack.isEmpty()) {
            TreeNode node = stack.pop();
            if (node.right != null) {
                stack.push(node.right);
            }
            if (node.left != null) {
                stack.push(node.left);
            }

            node.left = null;
            if (!stack.isEmpty()) {
                node.right = stack.peek();
            }
        }
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
