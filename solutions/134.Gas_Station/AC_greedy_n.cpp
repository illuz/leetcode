/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_greedy_n.cpp
*  Create Date: 2015-03-17 14:37:08
*  Descripton:  Greedy.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int start, cur_station, k, n = gas.size();

        for (start = 0; start < n; start += k + 1) {
            int cur_gas = 0;
            for (k = 0; k < n; ++k) { // cross k stations
                cur_station = (start + k) % n;
                cur_gas += gas[cur_station] - cost[cur_station];
                if (cur_gas < 0)
                    break;
            }
            if (cur_gas >= 0)
                return start;
        }

        return -1;
    }
};

int main() {

    return 0;
}

