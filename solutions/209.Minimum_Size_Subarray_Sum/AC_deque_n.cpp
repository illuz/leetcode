/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_deque_n.cpp
*  Create Date: 2015-10-30 21:32:15
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;
const int MAX = 0x7fffffff;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len = nums.size();
        int sum = 0, res = MAX;
        int l = 0, r = 0;
        while (r < len) {
            while (r < len && sum < s) {
                sum += nums[r];
                ++r;
            }
            while (l < len && sum >= s) {
                res = min(res, r - l);
                sum -= nums[l];
                ++l;
            }
            if (sum >= s) {
                res = min(res, r - l);
            }
        }
        return res == MAX ? 0 : res;
    }
};

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    Solution ss;
    cout << ss.minSubArrayLen(s, nums) << endl;
    return 0;
}

