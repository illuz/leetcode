/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.java
*  Create Date: 2015-02-05 10:11:44
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int titleToNumber(String s) {
        int col = 0;
        for (char i : s.toCharArray()) {
            col = col * 26 + i - 'A' + 1;
        }
        return col;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println(s.titleToNumber("AB"));
    }

}
