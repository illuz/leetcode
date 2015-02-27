/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-02-27 11:22:48
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int atoi(String str) {

        int ret = 0;
        boolean overflow = false;
        int sign = 1;	// default is '+'
        int i = 0;
        int len = str.length();

        while (i < len && (str.charAt(i) == ' ' || str.charAt(i) == '\n' || str.charAt(i) == '\t'))
            ++i;
        if (i == len)
            return 0;

        // get sign
        if (str.charAt(i) == '-') {
            ++i;
            sign = -1;
        } else if (str.charAt(i) == '+')
            ++i;

        while (i < len) {
            if (str.charAt(i) < '0' || str.charAt(i) > '9')
                break;
            if ((sign == 1 && ret > (Integer.MAX_VALUE - (str.charAt(i)-'0')) / 10) ||
                    (sign == -1 && -ret < (Integer.MIN_VALUE + (str.charAt(i)-'0')) / 10)) {
                overflow = true;
                break;
            }
            ret = ret * 10 + (str.charAt(i) - '0');
            ++i;
        }
        if (overflow)
            ret = (sign == 1) ?  Integer.MAX_VALUE: Integer.MIN_VALUE;
        else
            ret *= sign;
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
