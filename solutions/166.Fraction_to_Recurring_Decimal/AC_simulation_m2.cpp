/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_m2.cpp
*  Create Date: 2015-04-07 21:04:50
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        string ret;
        long long num = numerator, den = denominator;
        if (num * den < 0)
            ret += "-";
        num = abs(num);
        den = abs(den);

        // integer
        char integer[100];
        sprintf(integer, "%lld", num / den);
        ret += integer;

        // fractional
        num %= den;
        if (num == 0)
            return ret;
        ret += ".";

        string frac;
        vector<long long> rec;
        rec.push_back(num);

        while (true) {
            for (int i = 0; i + 1 < rec.size(); ++i) {
                if (rec[i] == num) {
                    // found
                    ret += frac.substr(0, i) + "(" + frac.substr(i) + ")";
                    return ret;
                }
            }

            num *= 10;
            long long d = num / den;
            frac += '0' + d;
            num -= den * d;
            if (num == 0)
                return ret + frac;
            rec.push_back(num);
        }

        // will never go here
    }
};

int main() {
    int a, b;
    Solution s;
    while (cin >> a >> b)
        cout << s.fractionToDecimal(a, b) << endl;
    return 0;
}

