/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.java
*  Create Date: 2015-03-03 14:57:45
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    // Definition for binary tree
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x) { val = x; }
    }

    private boolean dfs(TreeNode root, long minval, long maxval) {
        if (root == null)
            return true;
        return root.val > minval && root.val < maxval &&
                dfs(root.left, minval, root.val) && dfs(root.right, root.val, maxval);
    }

    public boolean isValidBST(TreeNode root) {
        return dfs(root, (long)Integer.MIN_VALUE - 1, (long)Integer.MAX_VALUE + 1);
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
