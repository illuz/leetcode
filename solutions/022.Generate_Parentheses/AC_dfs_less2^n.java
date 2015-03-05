/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_less2^n.java
*  Create Date: 2015-03-05 10:20:26
*  Descripton:   
*/

import java.util.*;

public class Solution {

    public List<String> generateParenthesis(int n) {
        List<String> ret = new ArrayList<String>(), inner, outter;
        if (n == 0) {
            ret.add("");
            return ret;
        }
        if (n == 1) {
            ret.add("()");
            return ret;
        }
        for (int i = 0; i < n; ++i) {
            inner = generateParenthesis(i);
            outter = generateParenthesis(n - i - 1);
            for (int j = 0; j < inner.size(); ++j) {
                for (int k = 0; k < outter.size(); ++k) {
                    ret.add("(" + inner.get(j) + ")" + outter.get(k));
                }
            }
        }
        return ret;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println(s.generateParenthesis(3));
    }
}
