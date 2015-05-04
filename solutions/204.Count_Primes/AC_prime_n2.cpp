/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_prime_n2.cpp
*  Create Date: 2015-05-04 23:13:54
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        vector<bool> noprime(n, false);

        int sum = 0;
        int bound = sqrt(n);
        for (int i = 2; i < n; ++i) {
            if (!noprime[i]) {
                ++sum;
                if (i > bound)
                    continue;
                for (int j = i * i; j < n; j += i)
                    noprime[j] = true;
            }
        }
        return sum;
    }
};

int main() {

    return 0;
}

