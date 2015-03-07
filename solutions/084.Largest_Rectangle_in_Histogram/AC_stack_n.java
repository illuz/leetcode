/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n.java
*  Create Date: 2015-03-07 13:34:35
*  Descripton:  Using increase-only-stack to deal with it.
*/

import java.util.*;

public class Solution {

    public int largestRectangleArea(int[] height) {
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

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
