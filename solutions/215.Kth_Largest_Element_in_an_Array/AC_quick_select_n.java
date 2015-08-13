/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_quick_select_n.java
*  Create Date: 2015-08-13 10:22:12
*  Descripton:   
*/

public class Solution {

    public int findKthLargest(int[] nums, int k) {
        int left = 0, right = nums.length - 1;
        while (true) {
            int pos = partion(nums, left, right);
            if (pos == k - 1) return nums[pos];
            if (pos > k - 1) right = pos - 1;
            else left = pos + 1;
        }
    }

    // partion from qsort
    public int partion(int[] nums, int left, int right) {
        int pivot = nums[left];
        int l = left + 1, r = right;
        while (l <= r) {
            while (l <= r && nums[l] >= pivot) l++;
            while (l <= r && nums[r] <= pivot) r--;
            if (l <= r) {
                // swap
                int tmp = nums[l];
                nums[l] = nums[r];
                nums[r] = tmp;
            }
        }
        // swap r && pivot
        int tmp = nums[left];
        nums[left] = nums[r];
        nums[r] = tmp;

        return r;
    }
}
