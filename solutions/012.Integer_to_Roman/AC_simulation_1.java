/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.java
*  Create Date: 2015-03-02 23:06:05
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {
    private int[] val = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4,
            1
    };
    private String[] syb = new String[] {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV",
            "I"
    };


    public String intToRoman(int num) {
        StringBuilder roman = new StringBuilder();
        int i = 0, k;
        while (num > 0) {
            k = num / val[i];
            while (k-- > 0) {
                roman.append(syb[i]);
                num -= val[i];
            }
            i++;
        }
        return roman.toString();
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
