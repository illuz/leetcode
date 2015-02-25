/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitwise_n.java
*  Create Date: 2015-02-25 11:48:51
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {

    private int get_value(char ch) {
        switch (ch) {
            case 'A': return 0;
            case 'C': return 1;
            case 'G': return 2;
            case 'T': return 3;
        }
        return -1;
    }

    public List<String> findRepeatedDnaSequences(String s) {
        List<String> ans = new ArrayList<String>();
        boolean appeared[] = new boolean[11000000];
        boolean used[] = new boolean[11000000];
        if (s.length() <= 10)
            return ans;

        int hash = 0;
        // get first substring's hash
        for (int i = 0; i < 10; i++)
            hash = (hash << 2) | get_value(s.charAt(i));
        appeared[hash] = true;

        // deal every substring
        for (int i = 10; i < s.length(); ++i) {
            hash = ((1<<20) - 1) & ((hash << 2) | get_value(s.charAt(i)));
            if (used[hash])
                continue;
            if (appeared[hash]) {
                ans.add(s.substring(i - 9, i + 1));
                used[hash] = true;
            } else
                appeared[hash] = true;
        }

        return ans;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println(s.findRepeatedDnaSequences("AAAAAAAAAAAA"));
    }
}
