/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n.java
*  Create Date: 2015-09-07 20:36:56
*  Descripton:   
*/


import java.util.*;

class Main {
    public static void main(String[] args){
        System.out.println(Solution.calculate("(7)-(0)+(4)"));
    }
}

class Solution {
    public static int calculate(String s) {
        int res = 0, num = 0, sign = 1, bsign = 1;
        Stack<Integer> signs = new Stack<>();
        for (char c : s.toCharArray()) {
            if (c == ' ') continue;
            if (c >= '0' && c <= '9') {
                num = num * 10 + (c - '0');
            } else {
                res += num * sign * bsign;
                num = 0;
                if (c == '+') {
                    sign = 1;
                }
                if (c == '-') {
                    sign = -1;
                }
                if (c == '(') {
                    bsign *= sign;
                    signs.push(sign);
                    sign = 1;
                }
                if (c == ')') {
                    bsign *= signs.peek();
                    signs.pop();
                }
            }
        }
        res += num * sign * bsign;
        return res;
    }
}

