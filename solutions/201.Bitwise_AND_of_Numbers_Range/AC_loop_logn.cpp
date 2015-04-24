/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_loop_logn.cpp
*  Create Date: 2015-04-24 22:16:36
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int move = 0;
        while (m != n) {
            m >>= 1;
            n >>= 1;
            ++move;
        }
        return m << move;
    }
};

int main() {

    return 0;
}

