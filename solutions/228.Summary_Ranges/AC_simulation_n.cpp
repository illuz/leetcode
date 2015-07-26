/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-07-26 11:10:06
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.empty())
            return res;

        // append a element
        int sz = nums.size();
        nums.push_back(nums[sz - 1]);
        ++sz;

        int start = 0;
        for (int i = 0; i < sz - 1; ++i) {
            if (nums[i + 1] - nums[i] != 1) {
                if (start == i) {
                    res.push_back(to_string(nums[i]));
                } else {
                    res.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
                }
                start = i + 1;
            }
        }

        // pop the element
        nums.pop_back();

        return res;
    }
};

int main() {

    return 0;
}

