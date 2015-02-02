/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_record_n.java
*  Create Date: 2015-02-02 21:40:46
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int lengthOfLongestSubstring(String s) {
        int res = 0, left = 0;
        int prev[] = new int[300];

		// init prev array
        for (int i = 0; i < 300; ++i)
            prev[i] = -1;

        for (int i = 0; i < s.length(); ++i) {
            if (prev[s.charAt(i)] >= left)
                left = prev[s.charAt(i)] + 1;
            prev[s.charAt(i)] = i;
            if (res < i - left + 1)
                res = i - left + 1;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println(s.lengthOfLongestSubstring("aa"));
    }

}
