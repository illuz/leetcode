/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_2^n.java
*  Create Date: 2015-02-08 11:18:01
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Solution {

    public List<List<Integer>> subsetsWithDup(int[] S) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        List<Integer> cur = new ArrayList<Integer>();

        Arrays.sort(S);

        dfs(0, res, cur, S);
        return res;
    }

    private void dfs(int dep, List<List<Integer>> res, List<Integer> cur,
                int[] S) {
        if (dep == S.length) {
            res.add(new ArrayList<Integer>(cur));
        } else {
            int upper = dep;
            while (upper >= 0 && upper < S.length - 1 && S[upper] == S[upper + 1]) {
                ++upper;
            }
            // no choose
            dfs(upper + 1, res, cur, S);
            // choose
            for (int i = dep; i <= upper; ++i) {
                cur.add(new Integer(S[dep]));
                dfs(upper + 1, res, cur, S);
            }
            for (int i = dep; i <= upper; ++i)
                cur.remove(cur.size() - 1);
        }
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 2};
        List<List<Integer>> res = s.subsetsWithDup(input);
        for (List<Integer> i : res) {
            for (Integer j : i)
                System.out.print(j.toString() + ' ');
            System.out.println("");
        }
    }
}
