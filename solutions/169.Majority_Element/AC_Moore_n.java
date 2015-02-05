/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_Moore_n.java
*  Create Date: 2015-02-05 10:48:42
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int majorityElement(int[] num) {
        int cnt = 0;
        int major = 0;
        for (int i : num) {
            if (cnt == 0)
                major = i;
            cnt += (major == i) ? 1 : -1;
        }
        return major;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println("no case");
    }

}
