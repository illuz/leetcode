/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_greedy_n.cpp
*  Create Date: 2015-03-12 11:10:07
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); ++i)
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];
        return profit;
    }
};

int main() {

	return 0;
}

