/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-02-27 10:03:47
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int reverse(int x) {
        int ret = 0;
        while (Math.abs(x) != 0) {
            if (Math.abs(ret) > Integer.MAX_VALUE)
                return 0;
            ret = ret * 10 + x % 10;
            x /= 10;
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
