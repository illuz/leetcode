/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitset_n.cpp
*  Create Date: 2015-03-16 10:58:56
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        const int size = 32;
        bitset<size> bits(n);
        return bits.count();
    }
};

int main() {

    return 0;
}

