/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-02-27 00:33:10
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public String convert(String s, int nRows) {
        if (nRows == 1) return s;
        int step = nRows * 2 - 2, len = s.length();
        String ret = "";
        // first row
        for (int i = 0; i < len; i += step)
            ret += s.charAt(i);
        for (int i = 1; i < nRows - 1; i++) {
            for (int j = i; j < len; j += step) {
                ret += s.charAt(j);
                if (j + (step - i * 2) < len)
                    ret += s.charAt(j + (step - i * 2));
            }
        }
        // last row
        for (int i = nRows - 1; i < len; i += step)
            ret += s.charAt(i);
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
