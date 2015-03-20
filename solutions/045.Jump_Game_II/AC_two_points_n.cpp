/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n.cpp
*  Create Date: 2015-01-30 10:33:04
*  Descripton:  Two point
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int jump(int A[], int n) {
        if (n == 1)
            return 0;
        int start = 0, end = 1;
        int step = 0;
        while (end <= n) {
            int new_end = end;

            // update new [start, end] base on old [start, end]
            step++;
            for (int i = start; i < end; ++i) {
                if (A[i] + i + 1 >= n)
                    return step;
                new_end = max(new_end, A[i] + i + 1);
            }

            start = end;
            end = new_end;

            if (start == end)    // cannot reach
                return 0;
        }

        // this won't go
        return step;
    }
};

int main() {
    int n, A[1000];
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> A[i];
        cout << s.jump(A, n) << endl;
    }
    return 0;
}
