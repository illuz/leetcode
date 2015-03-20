/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulatoin_n.cpp
*  Create Date: 2015-03-12 10:46:21
*  Descripton:  profit = prices[sell] - prices[buy]
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int buy = 0;
        int profit = 0;
        for (int i = 0; i < prices.size(); ++i) {
            if (prices[buy] > prices[i])
                buy = i;
            profit = max(profit, prices[i] - prices[buy]);
        }
    }
};

int main() {

    return 0;
}

