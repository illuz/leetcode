/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_map_nlogn.java
*  Create Date: 2015-03-06 22:04:19
*  Descripton:   
*/

import java.util.*;

public class Solution {

    public List<Integer> findSubstring(String S, String[] L) {
        List<Integer> ret = new ArrayList<Integer>();
        int slen = S.length(), llen = L.length;
        if (slen <= 0 || llen <= 0)
            return ret;
        int wlen = L[0].length();

        // get the words' map
        HashMap<String, Integer> words = new HashMap<String, Integer>();
        for (String str : L) {
            if (words.containsKey(str)) {
                words.put(str, words.get(str) + 1);
            } else {
                words.put(str, 1);
            }
        }

        for (int i = 0; i < wlen; ++i) {
            int left = i, count = 0;
            HashMap<String, Integer> tmap = new HashMap<String, Integer>();

            for (int j = i; j <= slen - wlen; j += wlen) {
                String str = S.substring(j, j + wlen);

                if (words.containsKey(str)) {
                    if (tmap.containsKey(str)) {
                        tmap.put(str, tmap.get(str) + 1);
                    } else {
                        tmap.put(str, 1);
                    }

                    if (tmap.get(str) <= words.get(str)) {
                        count++;
                    } else {
                        // too many words, push the 'left' forward
                        while (tmap.get(str) > words.get(str)) {
                            String tmps = S.substring(left, left + wlen);
                            tmap.put(tmps, tmap.get(tmps) - 1);
                            if (tmap.get(tmps) < words.get(tmps)) {
                                // if affect the count
                                count--;
                            }
                            left += wlen;
                        }
                    }

                    // get the answer
                    if (count == llen) {
                        ret.add(left);
                        // it's better to push forward once
                        String tmps = S.substring(left, left + wlen);
                        tmap.put(tmps, tmap.get(tmps) - 1);
                        count--;
                        left += wlen;
                    }
                } else {
                    // not any match word
                    tmap.clear();
                    count = 0;
                    left = j + wlen;
                }
            }
        }
        return ret;
    }

    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        String[] input = {"a","b"};
        System.out.println(s.findSubstring("abababab", input));
    }
}
