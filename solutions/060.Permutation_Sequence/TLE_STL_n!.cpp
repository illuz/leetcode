/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_STL_n!.cpp
*  Create Date: 2015-01-17 10:17:40
*  Descripton:  Use next_permutation 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string getPermutation(int n, int k) {
        string str;
        for (int i = 0; i < n; i++)
            str.push_back(i + '1');
        while (k--)
            next_permutation(str.begin(), str.end());
        return str;
    }
};

int main() {

    return 0;
}

