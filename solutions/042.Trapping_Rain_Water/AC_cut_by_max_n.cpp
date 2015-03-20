/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_cut_by_max_n.cpp
*  Create Date: 2015-01-29 09:07:04
*  Descripton:  Cut the height into two part by max height
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int trap(int A[], int n) {
        int maxi = 0, peak = 0, sum = 0;
        // get the max position
        for (int i = 0; i < n; ++i)
            if (A[maxi] < A[i])
                maxi = i;

        // first part: forward to maxi
        for (int i = 0; i < maxi; ++i) {
            if (A[i] > peak)
                peak = A[i];
            else
                sum += peak - A[i];
        }

        // second part: backward to maxi
        peak = 0;
        for (int i = n - 1; i > maxi; --i) {
            if (A[i] > peak)
                peak = A[i];
            else
                sum += peak - A[i];
        }
        return sum;
    }
};

int main() {
    int n, A[100];
    Solution s;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    cout << s.trap(A, n) << endl;
    return 0;
}

