/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_pre_deal_n.cpp
*  Create Date: 2015-03-13 10:11:39
*  Descripton:  Pre deal the left[n] and right[n] of sub_questions.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        if (n == 0)
            return 0;
        vector<int> left(n);
        int buy_price = prices[0], profit = 0;

        // pre deal the left
        for (int i = 1; i < n; ++i) {
            buy_price = min(buy_price, prices[i]);
            profit = max(profit, prices[i] - buy_price);
            left[i] = profit;
        }

        int ret = left[n - 1];
        buy_price = prices[n - 1];
        profit = 0;
        // deal the right and get result
        for (int i = n - 1; i >= 1; --i) {
            buy_price = max(buy_price, prices[i]);
            profit = max(profit, buy_price - prices[i]);
            ret = max(ret, profit + left[i - 1]);
        }
        return ret;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto & i : arr)
        cin >> i;
    Solution s;
    cout << s.maxProfit(arr) << endl;
    return 0;
}

