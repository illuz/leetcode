/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search.java
*  Create Date: 2015-02-14 09:54:53
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {
    private int findPeakInRange(int[] num, int lhs, int rhs) {
        int mid = (lhs + rhs) / 2;
        if ((mid == lhs || num[mid] > num[mid - 1]) &&
                (mid == rhs || num[mid] > num[mid + 1]))
            return mid;
        if (num[mid + 1] > num[mid])
            return findPeakInRange(num, mid + 1, rhs);
        else
            return findPeakInRange(num, lhs, mid);

    }

    public int findPeakElement(int[] num) {
        return findPeakInRange(num, 0, num.length - 1);
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println(s.findPeakElement(input));
    }
}
