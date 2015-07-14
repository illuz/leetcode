/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_map_nlogn.cpp
*  Create Date: 2015-07-13 21:39:31
*  Descripton:   
*/


#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            if (mp.find(i) != mp.end()) {
                return true;
            }
            mp[i] = 1;
        }
        return false;
    }
};

int main() {

    return 0;
}

