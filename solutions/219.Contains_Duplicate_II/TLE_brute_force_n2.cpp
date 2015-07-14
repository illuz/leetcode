/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_brute_force_n2.cpp
*  Create Date: 2015-07-14 11:21:35
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n && j < i + k + 1; ++j) {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

int main() {

    return 0;
}

