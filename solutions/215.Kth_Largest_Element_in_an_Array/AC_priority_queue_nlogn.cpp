/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_priority_queue_nlogn.cpp
*  Create Date: 2015-08-11 20:43:23
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; ++i)
            q.pop();
        return q.top();
    }
};

int main() {

    return 0;
}

