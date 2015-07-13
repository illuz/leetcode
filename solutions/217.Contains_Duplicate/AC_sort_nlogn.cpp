/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_sort_nlogn.cpp
*  Create Date: 2015-07-13 21:41:31
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return unique(nums.begin(), nums.end()) != nums.end();
    }
};

int main() {

    return 0;
}

