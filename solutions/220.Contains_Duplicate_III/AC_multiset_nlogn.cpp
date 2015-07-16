/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_multiset_nlogn.cpp
*  Create Date: 2015-07-15 10:38:46
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        // at most size k set
        multiset<long long> ms;
        for (int i = 0; i < nums.size(); ++i) {
            auto low = ms.lower_bound(nums[i]);

            if (
                    (low != ms.end() && abs(*low - nums[i]) <= t) ||
                    (low != ms.begin() && abs(*(--low) - nums[i]) <= t)
               )
                return true;

            if (ms.size() < k) {
                ms.insert(nums[i]);
            } else {
                // insert first or fail k=0
                ms.insert(nums[i]);
                // only erase(nums[i - k]) will remove all num[i-k]
                // but here it will not contain duplicate, only erase(nums[i - k]) is lso ok
                ms.erase(ms.find(nums[i]));
            }
        }
        return false;
    }
};

int main() {
    Solution s;
    int n, k, t;
    cin >> n >> k >> t;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    cout << s.containsNearbyAlmostDuplicate(nums, k, t) << endl;
    return 0;
}

