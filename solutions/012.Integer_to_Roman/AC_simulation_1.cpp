/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.cpp
*  Create Date: 2014-12-02 23:11:37
*  Descripton:  simulateion
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int val[13] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    };
    string syb[13] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
    };
public:
    string intToRoman(int num) {
        string roman;
        int i = 0, k;
        while (num > 0) {
            k = num / val[i];
            while (k--) {
                roman += syb[i];
                num -= val[i];
            }
            i++;
        }
        return roman;
    }
};

int main() {
    Solution s;
    int n;
    while (cin >> n)
        cout << s.intToRoman(n) << endl;
    return 0;
}

