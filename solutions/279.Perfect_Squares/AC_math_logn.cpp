/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_math_logn.cpp
*  Create Date: 2015-10-26 13:46:45
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    bool isSquare(int n) {
        int root = (int)sqrt(n);
        return root * root == n;
    }

public:
    int numSquares(int n) {
        if (isSquare(n))
            return 1;

        // 4^k*(8*m + 7) : return 4
        while ((n & 3) == 0)
            n >>= 2;
        if ((n & 7) == 7)
            return 4;

        // check 2
        int root = (int)sqrt(n);
        for (int i = 1; i <= root; ++i)
            if (isSquare(n - i * i))
                return 2;

        return 3;
    }
};

int main() {

    return 0;
}

