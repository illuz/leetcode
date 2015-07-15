/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_unordered_map_nlogn.cpp
*  Create Date: 2015-07-15 10:10:44
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // map <number, index>
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            if (mp.find(nums[i]) != mp.end() && mp[nums[i]] >= i - k)
                return true;
            mp[nums[i]] = i;
        }
        return false;
    }
};

int main() {

    return 0;
}

