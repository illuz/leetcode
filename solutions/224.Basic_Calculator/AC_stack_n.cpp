/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n.cpp
*  Create Date: 2015-09-07 19:07:22
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int calculate(string s) {
        stack<int> nums;
        stack<int> signs;
        int num = 0, res = 0, sign = 1;
        for (auto ch : s) {
            if (ch == ' ') continue;
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            } else {
                res += num * sign;
                num = 0;
                if (ch == '+') sign = 1;
                if (ch == '-') sign = -1;
                if (ch == '(') {
                    nums.push(res);
                    signs.push(sign);
                    res = 0;
                    sign = 1;
                }
                if (ch == ')') {
                    res = nums.top() + res * signs.top();
                    nums.pop();
                    signs.pop();
                }
            }
        }
        res += sign * num;
        return res;
    }
};

int main() {

    return 0;
}

