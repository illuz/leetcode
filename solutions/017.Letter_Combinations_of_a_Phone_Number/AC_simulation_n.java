/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-03-04 15:44:40
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
    private String[] alpha = new String[] {
            " ",
            "1", "abc", "def",
            "ghi", "jkl", "mno",
            "pqrs", "tuv", "wxyz"
    };
    private StringBuilder word;

    private void dfs(List<String> res, String digits, int cur) {
        if (cur >= digits.length()) {
            res.add(word.toString());
        } else {
            for (int i = 0; i < alpha[digits.charAt(cur) - '0'].length(); ++i) {
                word.append(alpha[digits.charAt(cur) - '0'].charAt(i));
                dfs(res, digits, cur + 1);
                word.deleteCharAt(word.length() - 1);
            }
        }
    }

    public List<String> letterCombinations(String digits) {
        List<String> ret = new ArrayList<String>();
        word = new StringBuilder();
        dfs(ret, digits, 0);
        return ret;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println(s.letterCombinations("23"));
    }
}
