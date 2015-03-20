/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_n.cpp
*  Create Date: 2014-12-05 14:19:58
*  Descripton:  use stack
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stk.push(s[i]);
            } else {
                if (stk.empty())
                    return false;
                if (stk.top() == '(' && s[i] == ')')
                    stk.pop();
                else if (stk.top() == '[' && s[i] == ']')
                    stk.pop();
                else if (stk.top() == '{' && s[i] == '}') 
                    stk.pop();
                else
                    return false;
            }
        }
        return stk.empty();
    }
};

int main() {
    Solution a;
    string s;
    while (cin >> s)
        cout << a.isValid(s) << endl;
    return 0;
}

