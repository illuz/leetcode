/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n!.java
*  Create Date: 2015-02-03 13:16:15
*  Descripton:   
*/

import java.util.Scanner;

public class Solution {

    public int totalNQueens(int n) {
        cnt = 0;
        col = new int[n];
        m_diag = new int[2 * n];
        a_diag = new int[2 * n];
        N = n;

        dfs(0);

        return cnt;
    }

    private int cnt;
    private int[] col;
    private int[] m_diag;
    private int[] a_diag;
    private int N;

    private void dfs(int row) {
        if (row == N) {
            ++cnt;
            return;
        }

        for (int i = 0; i < N; ++i) {
            if (col[i] != 0 || m_diag[row + i] != 0 || a_diag[row - i + N] != 0)
                continue;
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  1;
            dfs(row + 1);
            col[i] = m_diag[row + i] = a_diag[row - i + N] =  0;

        }
    }


    // debug
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        Solution s = new Solution();
        System.out.println(s.totalNQueens(4));
    }

}
