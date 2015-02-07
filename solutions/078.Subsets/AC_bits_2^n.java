/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bits_2^n.java
*  Create Date: 2015-02-07 19:31:52
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Solution {

    public List<List<Integer>> subsets(int[] S) {
        long upper = (1L << S.length);
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        Arrays.sort(S);
        for (long i = 0; i < upper; ++i) {
            List<Integer> single = new ArrayList<Integer>();
            for (int j = 0; j < S.length; ++j)
                if (((1L<<j) & i) != 0)
                    single.add(S[j]);
            res.add(single);
        }
        return res;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println("no case");
    }
}
