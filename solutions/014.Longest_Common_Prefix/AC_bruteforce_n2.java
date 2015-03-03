/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bruteforce_n2.java
*  Create Date: 2015-03-03 15:17:18
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0)
            return "";
        for (int i = 0; i < strs[0].length(); i++) {
            for (int j = 1; j < strs.length; j++)
                if (strs[j].length() <= i || strs[j].charAt(i) != strs[0].charAt(i))
                    return strs[0].substring(0, i);
        }
        return strs[0];
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
