/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.java
*  Create Date: 2015-02-05 09:46:58
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public String convertToTitle(int n) {
        StringBuilder ret = new StringBuilder();
        while (n > 0) {
            ret.append((char)('A' + (n - 1) % 26));
            n = (n - 1) / 26;
        }
        return ret.reverse().toString();
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println(s.convertToTitle(26));
    }

}
