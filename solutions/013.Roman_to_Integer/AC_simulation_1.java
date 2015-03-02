/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.java
*  Create Date: 2015-03-02 23:14:38
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {
    private int[] val = new int[255];
    private void init() {
        val['I'] = 1; val['V'] = 5; val['X'] = 10; val['L'] = 50;
        val['C'] = 100; val['D'] = 500; val['M'] = 1000;
    }

    public int romanToInt(String s) {
        init();
        int ret = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i > 0 && val[s.charAt(i)] > val[s.charAt(i - 1)]) {
                ret += val[s.charAt(i)] - 2 * val[s.charAt(i - 1)];
            } else {
                ret += val[s.charAt(i)];
            }
        }
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
