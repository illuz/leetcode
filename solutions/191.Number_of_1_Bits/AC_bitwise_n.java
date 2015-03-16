/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitwise_n.java
*  Create Date: 2015-03-16 11:10:24
*  Descripton:   
*/

import java.util.*;

public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int ret = 0;
        while (n != 0) {
            if ((n&1) == 1) {
                ret++;
            }
            n >>>= 1;
        }
        return ret;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
