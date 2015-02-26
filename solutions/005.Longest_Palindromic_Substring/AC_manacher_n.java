/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_manacher_n.java
*  Create Date: 2015-02-27 00:20:38
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public String longestPalindrome(String s) {
        int[] p = new int[2048];
        StringBuilder t = new StringBuilder("$");
        for (int i = 0; i < s.length(); ++i) {
            t.append('#');
            t.append(s.charAt(i));
        }
        t.append("#_");
        // mx为已判断回文串最右边位置，id为中间位置，mmax记录p数组中最大值
        int mx = 0, id = 0, mmax = 0;
        int right = 0;
        for (int i = 1; i < t.length() - 1; i++) {
            p[i] = mx > i ? Math.min(p[2 * id - i], mx - i) : 1;
            while (t.charAt(i + p[i]) == t.charAt(i - p[i]))
                p[i]++;
            if (i + p[i] > mx) {
                mx = i + p[i];
                id = i;
            }
            if (mmax < p[i]) {
                mmax = p[i];
                right = i;
            }
        }
        // 最长为mmax - 1
        return s.substring(right/2 - mmax/2, right/2 - mmax/2 + mmax-1);
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
