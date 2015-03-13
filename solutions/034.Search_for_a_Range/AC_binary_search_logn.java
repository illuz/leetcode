/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_logn.java
*  Create Date: 2015-03-13 16:25:37
*  Descripton:   
*/

import java.util.*;

public class Solution {

    public int[] searchRange(int[] A, int target) {
        int[] ret = new int[2];
        ret[0] = ret[1] = -1;
        int left = 0, right = A.length - 1, mid;

        while (left <= right) {
            if (A[left] == target && A[right] == target) {
                ret[0] = left;
                ret[1] = right;
                break;
            }

            mid = (right + left) / 2;
            if (A[mid] < target) {
                left = mid + 1;
            } else if (A[mid] > target) {
                right = mid - 1;
            } else {
                if (A[right] == target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }

        return ret;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 3};
        System.out.println(s.searchRange(input, 1));
    }
}
