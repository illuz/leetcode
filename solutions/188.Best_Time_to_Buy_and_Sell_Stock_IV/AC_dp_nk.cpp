/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dp_nk.cpp
*  Create Date: 2015-03-14 20:59:20
*  Descripton:  Just like the 123.III's O(1) space version.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maxProfit(int k, vector<int> &prices) {
        int n = prices.size();
        if (k == 0 || n < 2)
            return 0;

        if (k > n / 2) {
            // like the 122.II version
            int ret = 0;
            for (int i = 1; i < n; ++i)
                if (prices[i] > prices[i - 1])
                    ret += prices[i] - prices[i - 1];
            return ret;
        }

        vector<int> buy(k, INT_MIN);
        vector<int> sell(k, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = k - 1; j >= 0; --j) {
                sell[j] = max(sell[j], buy[j] + prices[i]);
                if (j == 0)
                    buy[j] = max(buy[j], -prices[i]);
                else
                    buy[j] = max(buy[j], sell[j - 1] - prices[i]);
            }
        }
        return sell[k - 1];
    }
};

int main() {

    return 0;
}

