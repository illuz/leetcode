/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_array_dp_nm.java
*  Create Date: 2015-03-02 11:14:29
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public boolean isMatch(String s, String p) {
        int lens = s.length();
        int lenp = p.length();
        if (lens == 0 && lenp == 0)
            return true;

        // init
        boolean[][] dp = new boolean[2][lenp + 1];
        dp[0][0] = dp[1][0] = true;
        for (int j = 2; j <= lenp; ++j) {
            if (p.charAt(j - 1) == '*' && dp[0][j - 2]) {
                dp[0][j] = dp[1][j] = true;
            }
        }

        // dp
        for (int i = 1; i <= lens; ++i) {
            dp[i&1][0] = false;
            for (int j = 1; j <= lenp; ++j) {
                dp[i&1][j] = ((p.charAt(j - 1) == s.charAt(i - 1) || p.charAt(j - 1) == '.') && dp[1-(i&1)][j - 1])
                        || p.charAt(j - 1) == '*' && (p.charAt(j - 2) == s.charAt(i - 1) || p.charAt(j - 2) == '.') && dp[1-(i&1)][j]
                        || (j >= 2 && p.charAt(j - 1) == '*' && dp[i&1][j - 2]);
            }
        }

        return dp[lens&1][lenp];
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println(s.isMatch("aa", "a*"));
        System.out.println(s.isMatch("ab", ".*c"));
    }
}
