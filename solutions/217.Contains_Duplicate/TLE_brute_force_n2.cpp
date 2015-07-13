/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_brute_force_n2.cpp
*  Create Date: 2015-07-13 19:55:30
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {

    return 0;
}

