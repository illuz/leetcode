/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-30 10:46:52
*  Descripton:  simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n <= 2)
            return n;
        int ret = 0;
        for (int i = 0; i < n - 2; i++)
            if (A[i] != A[i + 1] || A[i] != A[i + 2])
                A[ret++] = A[i];
        A[ret++] = A[n - 2];
        A[ret++] = A[n - 1];
        return ret;
    }
};

int main() {
    Solution s;
    int n, A[100];
    while (cin >>n) {
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int res = s.removeDuplicates(A, n);
        for (int i = 0; i < res; i++)
            cout << A[i] << ' ';
        cout << endl;
    }
    return 0;
}

