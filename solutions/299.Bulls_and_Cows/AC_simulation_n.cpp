/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-11-03 09:40:31
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string getHint(string secret, string guess) {
        int counts[10] = {0};
        int A = 0, B = 0;
        // get counts map
        for (auto c : secret) {
            ++counts[c - '0'];
        }
        // get A
        for (int i = 0; i < guess.length(); ++i) {
            if (secret[i] == guess[i]) {
                ++A;
                --counts[guess[i] - '0'];
            }
        }
        // get B
        for (int i = 0; i < guess.length(); ++i) {
            if (secret[i] != guess[i] && counts[guess[i] - '0'] > 0) {
                ++B;
                --counts[guess[i] - '0'];
            }
        }
        return to_string(A) + "A" + to_string(B) + "B";
    }
};

int main() {
    string a, b;
    Solution s;
    cin >> a >> b;
    cout << s.getHint(a, b);
    return 0;
}

