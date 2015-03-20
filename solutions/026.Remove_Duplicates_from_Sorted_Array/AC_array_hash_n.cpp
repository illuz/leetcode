/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_array_hash_n.cpp
*  Create Date: 2014-12-06 21:52:53
*  Descripton:  use array to record the appeared number
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int ret = 0;
        int appeared[20000];
        memset(appeared, 0, sizeof(appeared));
        for (int i = 0; i < n; i++) {
            if (!appeared[A[i] + 10000]++)
                A[ret++] = A[i];
        }
        return ret;
    }
};

int main() {
    Solution s;
    int n, A[100];
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            scanf("%d", &A[i]);
        cout << s.removeDuplicates(A, n) << endl;
    }
    return 0;
}

