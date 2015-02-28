/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation2_n.java
*  Create Date: 2015-02-28 22:52:04
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public boolean isPalindrome(int x) {
        long xx = x;
        long new_xx = 0;
        while (xx > 0) {
            new_xx = new_xx * 10 + xx % 10;
            xx /= 10;
        }
        return new_xx == x;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
