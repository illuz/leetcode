/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-02-27 10:03:47
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int reverse(int x) {
        Long res = 0L;
        Long tmp = Math.abs((long) x);
        while (tmp != 0) {
            res = res * 10 + tmp % 10;
            tmp = tmp / 10;
            if (res > (long)Integer.MAX_VALUE)
                return 0;
        }
        if (x>0)
            return res.intValue();
        else
            return -res.intValue();
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
