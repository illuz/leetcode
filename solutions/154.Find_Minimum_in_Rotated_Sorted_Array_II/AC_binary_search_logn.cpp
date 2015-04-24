/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_logn.cpp
*  Create Date: 2015-04-24 22:40:17
*  Descripton:  The worst is O(n)
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int findMin(vector<int> &num) {
        int left = 0, right = num.size() - 1;
        int mid, ans = num[0];
        while (left <= right) {
            mid = (left + right) / 2;
            if (num[left] < num[mid]) {
                ans = min(ans, num[left]);
                left = mid + 1;
            } else if (num[right] > num[mid]) {
                ans = min(ans, num[mid]);
                right = mid;
            } else {
                ans = min(ans, num[left]);
                ++left;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> num = {3, 3, 1, 3};
    Solution s;
    cout << s.findMin(num) << endl;
    return 0;
}

