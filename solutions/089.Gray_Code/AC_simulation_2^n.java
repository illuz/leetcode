/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_2^n.java
*  Create Date: 2015-02-20 10:30:33
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
    public List<Integer> grayCode(int n) {
        List<Integer> res = new ArrayList<Integer>();
        for (int i = 0; i < (1<<n); ++i) {
            res.add(i ^ (i>>1));
        }
        return res;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println(s.grayCode(2));
    }
}
