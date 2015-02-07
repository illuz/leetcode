/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_Newton_logn.java
*  Create Date: 2015-02-07 10:56:51
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int sqrt(int x) {
        if (x == 0)
            return 0;
        double lasty = 0;
        double y = 1;
        while (y != lasty) {
            lasty = y;
            y = (y + x / y) / 2;
        }
        return (int)y;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println("no case");
    }

}
