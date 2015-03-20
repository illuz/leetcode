/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_n2.cpp
*  Create Date: 2015-01-07 10:48:26
*  Descripton:  Interval dp
*               dp[i] = dp[k] * dp[i-k-1] { 0<=k<=i-1 }
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n + 1);
        dp[1] = dp[0] = 1;
        for (int i = 2; i <= n; i++) {
            for (int k = 0; k < i; k++)
                dp[i] += dp[k] * dp[i - k - 1];
        }
        
        return dp[n];
    }
};

int main() {

    return 0;
}

