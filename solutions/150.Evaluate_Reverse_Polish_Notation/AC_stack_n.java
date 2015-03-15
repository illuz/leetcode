/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n.java
*  Create Date: 2015-03-15 16:13:17
*  Descripton:   
*/

import java.util.*;

public class Solution {

    public int evalRPN(String[] tokens) {
        if (tokens == null || tokens.length == 0) {
            return 0;
        }
        String op = new String("+-*/");
        Stack<Integer> stack = new Stack<Integer>();
        for (String str : tokens) {
            int pos = op.indexOf(str);
            if (pos == -1) {
                stack.push(Integer.parseInt(str));
            } else {
                int a = stack.pop();
                int b = stack.pop();
                switch (pos) {
                    case 0: stack.push(b + a); break;
                    case 1: stack.push(b - a); break;
                    case 2: stack.push(b * a); break;
                    case 3: stack.push(b / a); break;
                }
            }
        }
        return stack.peek();
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
