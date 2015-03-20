/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_DFA_n.cpp
*  Create Date: 2015-02-23 18:07:25
*  Descripton:  Finite automata.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isNumber(string s) {
        enum InputType {
            INVALID, // 0
            SPACE,   // 1
            SIGN,    // 2
            DIGIT,   // 3
            DOT,     // 4
            EXP,     // 5
            NUM      // 6
        };
        const int table[][NUM] = {
            //0, 1, 2, 3, 4, 5
            {-1, 0, 3, 1, 2,-1}, // 0. start
            {-1, 8,-1, 1, 4, 5}, // 1. number before dot
            {-1,-1,-1, 4,-1,-1}, // 2. dot
            {-1,-1,-1, 1, 2,-1}, // 3. sign
            {-1, 8,-1, 4,-1, 5}, // 4. number after dot
            {-1,-1, 6, 7,-1,-1}, // 5. exp
            {-1,-1,-1, 7,-1,-1}, // 6. sign after exp
            {-1, 8,-1, 7,-1,-1}, // 7. number after exp
            {-1, 8,-1,-1,-1,-1}, // 8. valid end
        };

        int state = 0;
        for (auto ch : s) {
            InputType inputType = INVALID;
            if (isspace(ch))
                inputType = SPACE;
            else if (ch == '+' || ch == '-')
                inputType = SIGN;
            else if (isdigit(ch))
                inputType = DIGIT;
            else if (ch == '.')
                inputType = DOT;
            else if (ch == 'e' || ch == 'E')
                inputType = EXP;

            state = table[state][inputType];
            if (state == -1)
                return false;
        }
        return table[state][SPACE] == 8; // state 8 is valid end
    }
};

int main() {
    Solution s;
    string ss;
    while (getline(cin, ss))
        cout << s.isNumber(ss) << endl;
    return 0;
}

