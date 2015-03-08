/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n^2.java
*  Create Date: 2015-03-08 11:10:08
*  Descripton:  Use 084. Largest Rectangle in Histogram (Hard)
*/

import java.util.*;

public class Solution {

    // 084. Largest Rectangle in Histogram (Hard)
    private int largestRectangleArea(int[] height) {
        int len = height.length;
        Stack<Integer> stk = new Stack<Integer>();
        int ret = 0;
        for (int i = 0; i <= len; ++i) {
            int h = (i == len ? 0 : height[i]);
            if (stk.isEmpty() || h >= height[stk.peek()]) {
                stk.push(i);
            } else {
                int top = stk.pop();
                ret = Math.max(ret, height[top] * (stk.empty() ? i : i - stk.peek() - 1));
                --i;    // back one step again
            }
        }
        return ret;
    }

    public int maximalRectangle(char[][] matrix) {
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
            return 0;
        }

        int ret = 0;
        int[] height = new int[matrix[0].length];

        for (int i = 0; i < matrix.length; ++i) {
            for (int j = 0; j < matrix[0].length; ++j) {
                height[j] = matrix[i][j] == '0' ? 0 : height[j] + 1;
            }
            ret = Math.max(ret, largestRectangleArea(height));
        }

        return ret;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
