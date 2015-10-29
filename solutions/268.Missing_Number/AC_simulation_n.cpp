/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-10-29 18:10:37
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long len = nums.size();
        long long sum = len * (len + 1) / 2, sum2 = 0;
        for (auto i : nums)
            sum2 += i;
        return sum - sum2;
    }
};

int main() {

    return 0;
}

