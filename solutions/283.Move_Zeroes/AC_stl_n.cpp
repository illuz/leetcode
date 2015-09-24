/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stl_n.cpp
*  Create Date: 2015-09-24 11:13:56
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        return fill(remove(nums.begin(), nums.end(), 0), nums.end(), 0);
    }
};

int main() {

    return 0;
}

