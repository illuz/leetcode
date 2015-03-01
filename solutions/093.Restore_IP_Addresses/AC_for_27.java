/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_for_27.java
*  Create Date: 2015-03-01 20:29:15
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {

    private boolean isValid(String s) {
        Integer a = new Integer(Integer.parseInt(s));
        return a.toString().compareTo(s) == 0 && a < 256;
    }

    public List<String> restoreIpAddresses(String s) {
        int len = s.length();
        List<String> ret = new ArrayList<String>();
        for (int i = 1; i < 4 && i < len - 2; ++i) {
            for (int j = 1; j < 4 && i + j < len - 1; ++j)
                for (int k = 1; k < 4 && i + j + k < len; ++k) {
                    String s1 = s.substring(0, i);
                    String s2 = s.substring(i, i + j);
                    String s3 = s.substring(i + j, i + j + k);
                    String s4 = s.substring(i + j + k);
                    if (s4.length() > 3)
                        continue;
                    if (isValid(s1) && isValid(s2) && isValid(s3) && isValid(s4))
                        ret.add(s1 + "." + s2 + "." + s3 + "." + s4);
                }
        }
        return ret;
    }


    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println(s.restoreIpAddresses("255255255255"));
    }
}
