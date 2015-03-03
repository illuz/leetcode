/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n2.java
*  Create Date: 2015-03-03 19:06:59
*  Descripton:   
*/

import java.util.Arrays;
import java.util.Scanner;

public class Solution {

    public int threeSumClosest(int[] num, int target) {
        Arrays.sort(num);
        int ret = num[0] + num[1] + num[2];
        int len = num.length;
        for (int i = 0; i <= len - 3; i++) {
            // first number : num[i]
            int j = i + 1;	// second number
            int k = len - 1;	// third number
            while (j < k) {
                int sum = num[i] + num[j] + num[k];
                if (Math.abs(sum - target) < Math.abs(ret - target))
                    ret = sum;
                if (sum < target) {
                    ++j;
                } else if (sum > target) {
                    --k;
                } else {
                    ++j;
                    --k;
                }
            }
        }
        return ret;

    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
