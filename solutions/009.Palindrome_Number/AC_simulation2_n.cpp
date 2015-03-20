/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation2_n.cpp
*  Create Date: 2015-02-28 22:35:45
*  Descripton:  Get the reverse number and compare.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isPalindrome(int x) {
        long long xx = x;
        long long new_xx = 0;

        while (xx > 0) {
            new_xx = new_xx * 10 + xx % 10;
            xx /= 10;
        }

        return new_xx == (long long)x;
    }
};

int main() {

    return 0;
}

