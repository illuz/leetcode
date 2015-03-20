/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bigint_n2.cpp
*  Create Date: 2015-01-04 09:36:27
*  Descripton:  simulation 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.length(), len2 = num2.length();
        string res(len1 + len2, '0');
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for (int i = 0; i < len1; i++)
            for (int j = 0; j < len2; j++) {
                int tmp = (res[i + j] - '0') + (num1[i] - '0') * (num2[j] - '0');
                res[i + j] = '0' + tmp % 10;
                res[i + j + 1] += tmp / 10;
            }
        for (int i = len1 + len2 - 1; i > 0 && res[i] == '0'; i--)
            res.pop_back();
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    string a, b;
    Solution s;
    while (cin >> a >> b)
        cout << s.multiply(a, b) << endl;
    return 0;
}

