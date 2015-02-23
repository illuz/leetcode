/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_DFA_n.java
*  Create Date: 2015-02-24 00:51:33
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public boolean isNumber(String s) {
        String regex = "[-+]?(\\d+\\.?|\\.\\d+)\\d*(e[-+]?\\d+)?";
        if (s.trim().matches(regex))
            return true;
        else
            return false;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
