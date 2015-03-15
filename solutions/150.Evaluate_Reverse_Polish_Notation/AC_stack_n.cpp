/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n.cpp
*  Create Date: 2015-03-15 15:53:45
*  Descripton:  Using stack && atoi
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> stk;
        string op = "+-*/";
        for (auto str : tokens) {
            auto pos = op.find(str);
            if (pos == string::npos) {
                stk.push(atoi(str.c_str()));
            } else {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                if (pos == 0)
                    stk.push(b + a);
                else if (pos == 1)
                    stk.push(b - a);
                else if (pos == 2)
                    stk.push(b * a);
                else if (pos == 3)
                    stk.push(b / a);
            }
        }
        return stk.top();
    }
};

int main() {

    return 0;
}

