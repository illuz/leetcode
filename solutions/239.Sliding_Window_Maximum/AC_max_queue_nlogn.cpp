/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_max_queue_nlogn.cpp
*  Create Date: 2015-08-18 19:20:17
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int, greater<int> > win;
        vector<int> res;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            win.insert(nums[i]);
            if (i >= k - 1) {
                res.push_back(*win.begin());
                auto it = win.find(nums[i - k + 1]);
                win.erase(it);
            }
        }
        return res;
    }
};

int main() {

    return 0;
}

