/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-08-17 00:26:00
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int addDigits(int num) {
        int sum = getSum(num);
        while (sum >= 10) {
            sum = getSum(sum);
        }
        return sum;
    }
private:
    int getSum(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};

int main() {
    Solution s;
    for (int i = 0; i < 100; ++i) {
        cout << i << ' ' << s.addDigits(i) << endl;
    }
    return 0;
}

