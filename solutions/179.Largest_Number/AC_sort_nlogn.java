/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_sort_nlogn.java
*  Create Date: 2015-02-26 10:40:55
*  Descripton:   
*/

import java.util.Comparator;
import java.util.Scanner;

public class Solution {

    public String largestNumber(int[] num) {
        String[] str = new String[num.length];
        for (int i = 0; i < num.length; ++i) {
            str[i] = num[i] + "";
        }

        Comparator<String> comp = new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return (o2 + o1).compareTo(o1 + o2);    // reverse
            }
        };

        Arrays.sort(str, comp);
        if (str[0].equals("0")) {
            return "0";
        }

        String ans = new String();
        for (String s : str)
            ans += s;

        return ans;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {0, 0, 0};
        System.out.println(s.largestNumber(input));
    }
}
