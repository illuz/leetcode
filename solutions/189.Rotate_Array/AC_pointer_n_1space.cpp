/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_pointer_n_1space.cpp
*  Create Date: 2015-04-01 11:14:48
*  Descripton:  O(1) space
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    void reverse_array(int nums[], int a, int b) {
        while (a < b) {
            swap(nums[a], nums[b]);
            ++a;
            --b;
        }
    }

public:
    void rotate(int nums[], int n, int k) {
        if (n == 0 || k % n == 0)
            return;
        k = k % n;
        reverse_array(nums, 0, n - k - 1);
        reverse_array(nums, n - k, n - 1);
        reverse_array(nums, 0, n - 1);
    }
};

int main() {
    int num[] = {1, 2, 3, 4, 5};
    Solution s;
    s.rotate(num, 5, 3);
    for (int i = 0; i < 5; ++i)
        cout << num[i] << ' ';
    cout << endl;
    return 0;
}

