/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_set_nlogn.cpp
*  Create Date: 2015-07-13 20:48:14
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        return s.size() != nums.size();
    }
};

int main() {

    return 0;
}

