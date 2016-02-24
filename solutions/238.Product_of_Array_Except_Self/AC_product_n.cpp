/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_product_n.cpp
*  Create Date: 2016-02-24 19:38:34
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int zero_num = 0;
        for (auto i : nums) {
            if (i == 0)
                ++zero_num;
            else
                product *= i;
        }
        if (zero_num == 0) {
            for (int i = 0 ; i < nums.size(); ++i) {
                nums[i] = product / nums[i];
            }
        } else if (zero_num == 1) {
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] != 0) nums[i] = product;
                else nums[i] = 0;
            }
        } else {
            for (int i = 0; i < nums.size(); ++i) {
                nums[i] = 0;
            }
        }
        return nums;
    }
};

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    Solution s;
    vector<int> res = s.productExceptSelf(v);
    for (auto i : res) cout << i << ' ';
    return 0;
}

