/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_TreeSet_nlogn.java
*  Create Date: 2015-07-16 10:32:03
*  Descripton:   
*/

import java.util.TreeSet;

public class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int k, int t) {
        TreeSet<Integer> treeset = new TreeSet<>();
        for (int i = 0; i < nums.length; ++i) {
            Integer floor = nums[i] - t;
            Integer ceiling = nums[i] + t + 1;
            if ((long) nums[i] - (long) (t) < -2147483647)
                floor = Integer.MIN_VALUE;
            if ((long) nums[i] + (long) (t) + 1 > 2147483646)
                ceiling = Integer.MAX_VALUE;
            if (t >= 0 && treeset.subSet(floor, ceiling).size() != 0)
                return true;
            treeset.add(nums[i]);
            if (i >= k)
                treeset.remove(nums[i - k]);
        }
        return false;
    }

    public static void main(String[] args) {

    }
};
