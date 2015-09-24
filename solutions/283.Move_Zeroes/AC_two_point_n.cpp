/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_point_n.cpp
*  Create Date: 2015-09-24 10:43:56
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.empty()) return;
        int fill = 0, cur = 0;
        int sz = nums.size();
        while (cur < sz) {
            if (nums[cur] != 0)
                nums[fill++] = nums[cur];
            ++cur;
        }
        while (fill < sz) {
            nums[fill++] = 0;
        }
        return;
    }
};

int main() {

    return 0;
}

