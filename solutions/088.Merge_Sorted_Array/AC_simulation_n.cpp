/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-18 10:37:41
*  Descripton:  simulation 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        // move A[0~m-1] to A[n~n+m-1]
        for (int i = m - 1; i >= 0; i--)
            A[n + i] = A[i];
        // merge
        int pa = n, pb = 0, cnt = 0;
        while (pa < n + m && pb < n) {
            if (A[pa] > B[pb])
                A[cnt++] = B[pb++];
            else
                A[cnt++] = A[pa++];
        }
        while (pb < n)
            A[cnt++] = B[pb++];
    }
};

int main() {
    int a[100], b[100];
    int n, m;
    Solution s;
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);
        s.merge(a, n, b, m);
        for (int i = 0; i < n + m; i++)
            printf("%d ", a[i]);
        puts("");
    }
    return 0;
}

