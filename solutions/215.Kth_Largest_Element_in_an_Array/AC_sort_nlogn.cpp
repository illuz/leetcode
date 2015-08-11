/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_sort_nlogn.cpp
*  Create Date: 2015-08-11 20:07:33
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k - 1];
    }
};

int main() {

    return 0;
}

