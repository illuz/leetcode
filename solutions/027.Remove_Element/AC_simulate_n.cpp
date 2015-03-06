/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulate_n.cpp
*  Create Date: 2014-12-06 22:00:43
*  Descripton:  simulate
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int ret = 0;
        for (int i = 0; i < n; i++)
            if (A[i] != elem)
                A[ret++] = A[i];
        return ret;
    }
};

int main() {

    return 0;
}

