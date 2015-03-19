/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n^2.java
*  Create Date: 2015-03-19 10:52:23
*  Descripton:   
*/

import java.util.*;
import java.util.regex.Matcher;

public class Solution {
    public int minCut(String s) {
        int n = s.length();
        boolean[][] isPalindr = new boolean[n + 1][n + 1];
        int[] dp = new int[n + 1];

        // init
        for (int i = 0; i <= n; ++i) {
            dp[i] = i - 1;
        }

        // dp
        for (int i = 2; i <= n; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (s.charAt(i - 1) == s.charAt(j) &&
                        (i - 1- j < 2 || isPalindr[j + 1][i - 1])) {
                    isPalindr[j][i] = true;
                    dp[i] = Math.min(dp[i], dp[j] + 1);
                }
            }
        }

        return dp[n];
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println(s.minCut("ababcaca"));
    }
}
