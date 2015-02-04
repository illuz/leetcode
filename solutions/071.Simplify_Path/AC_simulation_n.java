/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-02-04 09:59:37
*  Descripton:   
*/

import java.util.Scanner;
import java.util.Stack;

public class Solution {

    public String simplifyPath(String path) {
        Stack<String> res = new Stack<String>();
        String[] ps = path.split("/");
        for (String a : ps) {
            if (a.equals("..")) {
                if (!res.empty()) {
                    res.pop();
                }
            } else if (a.equals(".") || a.equals("")) {
                continue;
            } else {
                res.push(a);
            }
        }
        if (res.empty()) {
            return "/";
        } else {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < res.size(); ++i)
                sb.append("/" + res.get(i));
            return sb.toString();
        }
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println(s.simplifyPath("/home//fsdf///dds//.././/"));
    }

}
