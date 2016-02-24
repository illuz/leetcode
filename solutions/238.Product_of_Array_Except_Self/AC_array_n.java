/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_array_n.java
*  Create Date: 2016-02-24 23:23:27
*  Descripton:   
*/

public static class Solution {
    public int[] productExceptSelf(int[] nums) {
        if (nums.length == 0) return nums;
        int[] left = new int[nums.length];
        left[0] = 1;
        for (int i = 1; i < nums.length; ++i) {
            left[i] = left[i - 1] * nums[i - 1];
        }
        int right = 1;
        for (int i = nums.length - 2; i >= 0; --i) {
            right *= nums[i + 1];
            left[i] *= right;
        }
        return left;
    }
}
