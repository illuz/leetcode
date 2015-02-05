/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_math_logn.java
*  Create Date: 2015-02-05 11:44:55
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int trailingZeroes(int n) {
        int ans = 0;
        while (n != 0) {
            ans += n / 5;
            n /= 5;
        }
        return ans;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println("no case");
    }

}
