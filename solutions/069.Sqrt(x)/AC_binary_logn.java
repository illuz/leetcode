/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_logn.java
*  Create Date: 2015-02-06 10:27:04
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int sqrt(int x) {
        if (x == 0)
            return 0;
        int l = 1, r = x / 2 + 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (m <= x / m && x / (m + 1) < m + 1)
                return m;
            if (x / m < m)
                r = m - 1;
            else
                l = m + 1;
        }
        return 0;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println("no case");
    }

}
