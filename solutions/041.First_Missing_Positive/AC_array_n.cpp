/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_array_n.cpp
*  Create Date: 2015-01-28 09:38:55
*  Descripton:  Brute force. This will use O(n) space && O(n) time.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        vector<bool> rec(n + 2);
        for (int i = 0; i < n; i++) {
            if (A[i] < n + 2 && A[i] > 0)
                rec[A[i]] = true;
        }
        for (int i = 1; i < n + 2; i++)
            if (!rec[i])
                return i;
    }
};

int main() {
    int n, A[100];
    Solution s;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << s.firstMissingPositive(A, n) << endl;
    return 0;
}

