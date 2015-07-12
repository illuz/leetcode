/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitwize2_1.cpp
*  Create Date: 2015-07-12 20:00:44
*  Descripton:  Better bitwize
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        n &= (n - 1);
        return n == 0;
    }
};

int main() {

    return 0;
}

