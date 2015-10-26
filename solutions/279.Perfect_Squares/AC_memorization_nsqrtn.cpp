/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_memorization_nsqrtn.cpp
*  Create Date: 2015-10-26 12:24:30
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
    public:
        int numSquares(int n) {
            vector<int> result(n + 1);
            for (int i = 1; i <= n; ++i) {
                int best = i;
                for (int j = 1; j * j <= i; ++j) {
                    best = min(best, result[i - j * j] + 1);
                }
                result[i] = best;
            }
            return result[n];
        }
};

int main() {

    return 0;
}

