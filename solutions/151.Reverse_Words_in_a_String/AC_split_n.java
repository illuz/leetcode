/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_split_n.java
*  Create Date: 2015-03-18 22:30:59
*  Descripton:   
*/

import java.util.*;

public class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split(" +");
        int len = words.length;
        if (len == 0) {
            return "";
        }
        StringBuilder sb = new StringBuilder(words[len - 1]);
        for (int i = len - 2; i >= 0; --i) {
            sb.append(" " + words[i]);
        }
        return sb.toString();
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
