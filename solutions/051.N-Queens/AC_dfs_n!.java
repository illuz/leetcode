/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n!.java
*  Create Date: 2015-02-03 12:24:38
*  Descripton:   
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {

    public List<String[]> solveNQueens(int n) {
        res = new ArrayList<String[]>();
        cur = new String[n];
        String tmp = "";
        for (int i = 0; i < n; ++i)
            tmp += '.';
        for (int i = 0; i < n; ++i)
            cur[i] = tmp;
        col = new int[n];
        m_diag = new int[2 * n];
        a_diag = new int[2 * n];
        N = n;

        dfs(0);

        return res;
    }

    private ArrayList<String[]> res;
    private String[] cur;
    private int[] col;
    private int[] m_diag;
    private int[] a_diag;
    private int N;

    private void dfs(int row) {
        if (row == N) {
            res.add(cur.clone());
            return;
        }

        for (int i = 0; i < N; ++i) {
            if (col[i] != 0 || m_diag[row + i] != 0 || a_diag[row - i + N] != 0)
                continue;
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  1;
            cur[row] = cur[row].substring(0, i) + "Q" + cur[row].substring(i + 1);
            dfs(row + 1);
            cur[row] = cur[row].substring(0, i) + "." + cur[row].substring(i + 1);
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  0;

        }
    }


    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        List<String[]> ans = s.solveNQueens(4);
        System.out.println(ans.get(1)[0]);
    }

}
