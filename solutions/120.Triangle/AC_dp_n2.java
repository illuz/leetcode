/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n2.java
*  Create Date: 2015-02-25 12:49:04
*  Descripton:   
*/

import java.util.List;
import java.util.Scanner;

public class Solution {

    public int minimumTotal(List<List<Integer>> triangle) {
        int[] dp = new int[triangle.size() + 1];
        for (int i = 0; i < dp.length; ++i)
            dp[i] = 1000000;

        dp[1] = triangle.get(0).get(0);
        for (int i = 1; i < triangle.size(); ++i) {
            for (int j = i + 1; j > 0; --j)
                dp[j] = Math.min(dp[j - 1], dp[j]) + triangle.get(i).get(j - 1);
        }
        int min = dp[1];
        for (int i = 2; i <= triangle.size(); ++i)
            min = Math.min(min, dp[i]);

        return min;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
