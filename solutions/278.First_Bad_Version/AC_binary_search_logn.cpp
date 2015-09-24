/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_logn.cpp
*  Create Date: 2015-09-24 09:33:56
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

// Forward declaration of isBadVersion API.
bool isBadVersion(int version) { return version >= 1; }

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (isBadVersion(mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};

int main() {
    int n;
    Solution s;
    cin >> n;
    cout << s.firstBadVersion(n) << endl;
    return 0;
}

