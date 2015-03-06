/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_array_n.cpp
*  Create Date: 2015-03-06 10:20:45
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string minWindow(string S, string T) {
        if (S.empty() || T.empty())
            return "";
        int slen = S.length(), tlen = T.length();
        int res_pos = 0;                // position of result
        int min_len = INT_MAX;
        int count = 0;                  // match count in window
        int sta[255] = {0};             // array map: state and window
        int wnd[255] = {0};
        int slow = 0, fast = 0;         // pointer

        // deal T
        for (int i = 0; i < tlen; ++i)
            ++sta[T[i]];

        // count
        for (int fast = 0; fast < slen; ++fast) {
            int idx = S[fast];
            ++wnd[idx];
            if (wnd[idx] <= sta[idx])
                ++count;
            
            // match enough
            if (count >= tlen) {
                while (wnd[S[slow]] > sta[S[slow]])
                    --wnd[S[slow++]];      // equal to: wnd[S[slow]]--; slow++;
                if (fast - slow + 1 < min_len) {
                    min_len = fast - slow + 1;
                    res_pos = slow;
                }
                // make it not enough again
                --wnd[S[slow++]];
                --count;
            }
        }
        return S.substr(res_pos, min_len == INT_MAX ? 0 : min_len);
    }
};

int main() {
    string S, T;
    Solution s;
    while (cin >> S >> T)
        cout << s.minWindow(S, T) << endl;
    return 0;
}

