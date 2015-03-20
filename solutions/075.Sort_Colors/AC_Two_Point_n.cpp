/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_Two_Point_n.cpp
*  Create Date: 2014-12-29 11:05:57
*  Descripton:  Two point, just like the first step of quick-sort
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    void sortColors(int A[], int n) {
        int zeroPoint = 0, twoPoint = n - 1;
        int i = 0;
        while (i <= twoPoint) {
            if (A[i] == 0 && i != zeroPoint)
                swap(A[zeroPoint++], A[i]);
            else if (A[i] == 2 && i != twoPoint)
                swap(A[twoPoint--], A[i]);
            else
                i++;
        }
    }
};
 
int main() {
    int n, a[100];
    Solution s;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        s.sortColors(a, n);
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}

