/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_xor_n.java
*  Create Date: 2015-10-29 19:30:32
*  Descripton:
*/

public class Solution {
    public int missingNumber(int[] nums) {
        int res = nums.length;
        for (int i = 0; i < nums.length; ++i) {
            res = res ^ nums[i] ^ i;
        }
        return res;
    }
}
