/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.java
*  Create Date: 2015-02-21 09:23:19
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {

    // Definition for binary tree
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x) { val = x; }
    }

    private void dfs(TreeNode root, int sum, List<List<Integer>> res, List<Integer> path) {
        if (root == null)
            return;
        path.add(root.val);
        sum -= root.val;
        if (root.left == null && root.right == null && sum == 0) {
            res.add(new ArrayList<Integer>(path));
        }
        dfs(root.left, sum, res, path);
        dfs(root.right, sum, res, path);
        path.remove(path.size() - 1);
    }

    public List<List<Integer>> pathSum(TreeNode root, int sum) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        List<Integer> path = new ArrayList<Integer>();
        dfs(root, sum, res, path);
        return res;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
