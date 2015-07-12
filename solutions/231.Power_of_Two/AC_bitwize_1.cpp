/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitwize_1.cpp
*  Create Date: 2015-07-12 19:47:54
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i < 32; ++i)
            if (((n >> i) == 1) && (1 << i) == n)
                return true;
        return false;
    }
};

int main() {
    return 0;
}

