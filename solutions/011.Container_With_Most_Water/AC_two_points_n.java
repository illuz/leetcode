/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n.java
*  Create Date: 2015-03-02 22:48:31
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int maxArea(int[] height) {
        int lpoint = 0, rpoint = height.length - 1;
        int area = 0;
        while (lpoint < rpoint) {
            area = Math.max(area, Math.min(height[lpoint], height[rpoint]) *
                    (rpoint - lpoint));
            if (height[lpoint] > height[rpoint])
                rpoint--;
            else
                lpoint++;
        }
        return area;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}
