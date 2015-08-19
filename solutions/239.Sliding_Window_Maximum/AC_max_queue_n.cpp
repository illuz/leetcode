/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_max_queue_n.cpp
*  Create Date: 2015-08-19 19:41:40
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MaxQueue q;
        vector<int> res;
        for (auto i : nums) {
            q.push(i);
            if (q.size() >= k) {
                res.push_back(q.max());
                q.pop();
            }
        }
        return res;
    }

private:
    class MaxQueue {
    private:
        queue<int> nums;
        deque<int> deq;
    public:
        void push(int x) {
            while (!deq.empty() && x > deq.back()) {
                deq.pop_back();
            }
            deq.push_back(x);
            nums.push(x);
        }
        void pop() {
            int x = nums.front();
            if (!deq.empty() && x == deq.front()) {
                deq.pop_front();
            }
            nums.pop();
        }
        int max() {
            return deq.front();
        }
        int size() {
            return nums.size();
        }
    };
};

int main() {
    Solution s;
    vector<int> nums({4, 3, 11}), ans;
    int k = 3;
    ans = s.maxSlidingWindow(nums, k);
    for (auto i : ans) cout << i << endl;
    return 0;
}

