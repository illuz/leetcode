/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n.cpp
*  Create Date: 2015-01-05 09:07:41
*  Descripton:  max[i] = max[i - 1] * A[i],
*                     or min[i - 1] * A[i],
*                     or A[i]
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maxProduct(int A[], int n) {
        if (!n)
            return 0;
        int tmax = A[0], tmin = A[0];    // product end with A[i]
        int res = tmax;
        for (int i = 1; i < n; i++) {
            int tmp1 = tmax * A[i], tmp2 = tmin * A[i];
            tmax = max(max(tmp1, tmp2), A[i]);
            tmin = min(min(tmp1, tmp2), A[i]);
            res = max(tmax, res);
        }
        return res;
    }
};

int main() {
    int n, A[100];
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> A[i];
        cout << s.maxProduct(A, n) << endl;
    }
    return 0;
}

