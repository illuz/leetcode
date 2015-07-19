/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.cpp
*  Create Date: 2015-07-19 16:13:45
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int s1 = (C - A) * (D - B);
        int s2 = (G - E) * (H - F);
        if (A > G || C < E || B > H || D < F) {
            return s1 + s2;
        }
        int a = max(A, E);
        int b = max(B, F);
        int c = min(C, G);
        int d = min(D, H);
        return s1 + s2 - (c - a) * (d - b);
    }
};

int main() {

    return 0;
}

