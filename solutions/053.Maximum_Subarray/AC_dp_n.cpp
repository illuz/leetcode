/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n.cpp
*  Create Date: 2014-12-24 11:16:17
*  Descripton:  dp
*               http://blog.csdn.net/hcbbt/article/details/10454947
*               the way 4
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maxSubArray(int A[], int n) {
        if (n == 0)
            return 0;
        int sum = A[0], mmax = A[0];
        for (int i = 1; i < n; i++) {
            if (sum < 0)
                sum = A[i];
            else
                sum += A[i];
            mmax = max(mmax, sum);
        }
        return mmax;
    }
};

int main() {

    return 0;
}

