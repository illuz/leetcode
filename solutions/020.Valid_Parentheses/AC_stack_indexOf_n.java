/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_indexOf_n.java
*  Create Date: 2015-03-04 19:44:23
*  Descripton:   
*/

import java.util.*;

public class Solution {

    public boolean isValid(String s) {
        Stack<Integer> stk = new Stack<Integer>();
        for (int i = 0; i < s.length(); ++i) {
            int pos = "(){}[]".indexOf(s.substring(i, i + 1));
            if (pos % 2 == 1) {
                if (stk.isEmpty() || stk.pop() != pos - 1)
                    return false;
            } else {
                stk.push(pos);
            }
        }
        return stk.isEmpty();
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 4};
        System.out.println("no case");
    }
}
