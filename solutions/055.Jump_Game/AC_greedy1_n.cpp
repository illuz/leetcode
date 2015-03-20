/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_greedy1_n.cpp
*  Create Date: 2014-12-25 09:59:38
*  Descripton:  dp
*               mark the canjump position and produce new positions
*               use presum method
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int B[1000010];        // cannot create it using new()
public:
    bool canJump(int A[], int n) {
        if (n <= 1)
            return true;
        memset(B, 0, sizeof(B));
        int sum = 1;    // now can go
        B[1] = -1;        // just can go until position 1
        for (int i = 0; i < n; i++) {
            sum += B[i];
            // if the B's pre-sum > 0 then it can be arrived
            if (sum <= 0)
                return false;
            if (i + A[i] < n)
                B[i + A[i] + 1] -= A[i];
            sum += A[i];
        }
        return true;
    }
};

int main() {
    int n, A[1000];
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> A[i];
        cout << s.canJump(A, n) << endl;
    }
    return 0;
}

