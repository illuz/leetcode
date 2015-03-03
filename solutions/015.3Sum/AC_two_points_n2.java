/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n2.java
*  Create Date: 2015-03-03 16:17:09
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Solution {

    public List<List<Integer>> threeSum(int[] num) {
        List<List<Integer>> ret = new ArrayList<List<Integer>>();
        int len = num.length, tar = 0;

        if (len <= 2)
            return  ret;

        Arrays.sort(num);

        for (int i = 0; i <= len - 3; i++) {
            // first number : num[i]
            int j = i + 1;	// second number
            int k = len - 1;	// third number
            while (j < k) {
                if (num[i] + num[j] + num[k] < tar) {
                    ++j;
                } else if (num[i] + num[j] + num[k] > tar) {
                    --k;
                } else {
                    ret.add(Arrays.asList(num[i], num[j], num[k]));
                    ++j;
                    --k;
                    // folowing 3 while can avoid the duplications
                    while (j < k && num[j] == num[j - 1])
                        ++j;
                    while (j < k && num[k] == num[k + 1])
                        --k;
                }
            }
            while (i <= len - 3 && num[i] == num[i + 1])
                ++i;
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
