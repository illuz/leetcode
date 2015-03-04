/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.java
*  Create Date: 2015-03-04 14:55:03
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {

    private String getOneLine(String[] words, int start, int end, int rest, int L) {
        StringBuilder line = new StringBuilder(words[start]);
        rest += (end - start);
        int even_space = rest + 1, num_of_more = 0;
        if (start != end) {
            even_space = rest / (end - start);
            num_of_more = rest - even_space * (end - start);
        }
        for (int i = start + 1; i <= end; ++i) {
            for (int j = 0; j < even_space; ++j) {
                line.append(' ');
            }
            if (i - start <= num_of_more)
                line.append(' ');
            line.append(words[i]);
        }
        while (line.length() < L) {
            line.append(' ');
        }
        return line.toString();
    }

    public List<String> fullJustify(String[] words, int L) {
        List<String> ret = new ArrayList<String>();
        int sz = words.length;
        int start_pos = 0;
        int cur_len = 0;

        for (int i = 0; i < sz; ++i) {
            if (cur_len + words[i].length() > L) {
                ret.add(getOneLine(words, start_pos, i - 1, L - cur_len + 1, L));
                start_pos = i;
                cur_len = 0;
            }
            cur_len += words[i].length();
            cur_len += 1;
        }
        ret.add(getOneLine(words, start_pos, sz - 1, 0, L));
        return ret;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        int[] input = {1, 2, 3, 1};
        System.out.println("no case");
    }
}

