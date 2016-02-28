/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2016-02-28 23:25:05
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long long min = (1ll<<50), mid = (1ll<<50), max = (1ll<<50);
        for (auto num : nums) {
            if (min > num) {
                min = num;
            } else if (mid > num) {
                if (min == num) continue;
                mid = num;
            } else if (max > num) {
                if (mid == num) continue;
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(3);
    Solution s;
    cout << s.increasingTriplet(nums) << endl;
    return 0;
}

