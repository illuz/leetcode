/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_greedy_n.cpp
*  Create Date: 2015-01-30 10:11:14
*  Descripton:  Loop and go in every step.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int jump(int A[], int n) {
        int reach = 1;
        int step = 0;
        for (int i = 0; i < reach && reach < n; ) {
            int farthest = reach;    // the farthest pos prev step can go
            while (i < farthest) {    // reach as far as possible this step
                reach = max(reach, i + 1 + A[i]);
                ++i;
            }
            step++;
        }
        if (reach >= n)
            return step;
        else
            return 0;
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
