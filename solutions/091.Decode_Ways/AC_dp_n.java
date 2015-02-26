/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n.java
*  Create Date: 2015-02-26 12:49:44
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int numDecodings(String s) {
        if (s.length() == 0)
            return 0;
        if (s.length() == 1)
            return s.charAt(0) != '0' ? 1 : 0;

        int[] dp = new int[2];
        int rec;
        dp[0] = 1;
        dp[1] = s.charAt(0) != '0' ? 1 : 0;
        for (int i = 2; i <= s.length(); ++i) {
            rec = 0;
            if (s.charAt(i - 1) != '0')
                rec += dp[(i - 1)&1];
            if (s.substring(i - 2, i).compareTo("27") < 0 && s.charAt(i - 2) != '0')
                rec += dp[i&1];
            dp[i&1] = rec;
        }
        return dp[s.length()&1];
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println(s.numDecodings("120"));
    }
}
