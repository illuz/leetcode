/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_STL_nlogn.cpp
*  Create Date: 2015-03-05 15:34:55
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        return distance(A, unique(A, A + n));
    }
};

int main() {

    return 0;
}

