/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitset_n.cpp
*  Create Date: 2015-03-16 10:51:56
*  Descripton:  Use bitset
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        const int size = 32;
        bitset<size> bits(n);
        for (int i = 0; i < size / 2; ++i) {
            // swap(bits[i], bits[size - i - 1]);
            int tmp = bits[i];
            bits[i] = bits[size - i - 1];
            bits[size - i - 1] = tmp;
        }
        return (uint32_t) bits.to_ulong();
    }
};

int main() {

    return 0;
}

