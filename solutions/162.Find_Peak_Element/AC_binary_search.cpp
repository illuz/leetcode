/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search.cpp
*  Create Date: 2015-02-14 09:18:02
*  Descripton:  Binary search
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int findPeakInRange(const vector<int> &num, int lhs, int rhs) {
        int mid = (lhs + rhs) / 2;
        if ((mid == lhs || num[mid] > num[mid - 1]) &&
                (mid == rhs || num[mid] > num[mid + 1]))
            return mid;
        if (num[mid + 1] > num[mid])
            return findPeakInRange(num, mid + 1, rhs);
        else
            return findPeakInRange(num, lhs, mid);
    }

public:
    int findPeakElement(const vector<int> &num) {
        int sz = num.size();
        return findPeakInRange(num, 0, sz - 1);
    }
};

int main() {
    int n;
    Solution s;
    cin >> n;
    vector<int> num(n);
    for (auto &i : num)
        cin >> i;
    cout << s.findPeakElement(num) << endl;
    return 0;
}

