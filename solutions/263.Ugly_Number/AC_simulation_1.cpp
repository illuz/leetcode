/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.cpp
*  Create Date: 2015-08-20 09:16:20
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0)
            return false;
        while (num % 2 == 0)
            num /= 2;
        while (num % 3 == 0)
            num /= 3;
        while (num % 5 == 0)
            num /= 5;
        return num == 1;
    }
};

int main() {

    return 0;
}

