/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        tle_bruteforce_n2.cpp
*  Create Date: 2014-11-26 10:44:37
*  Descripton:  brute force: O(n*n), TLE
*/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 0;

class Solution {
    public:
        vector<int> twoSum(vector<int> &numbers, int target) {
            int sz = numbers.size();
            vector<int> index;
            for (int i = 0; i < sz; i++)
                for (int j = i + 1; j < sz; j++)
                    if (numbers[i] + numbers[j] == target) {
                        index.push_back(i + 1);
                        index.push_back(j + 1);
                        return index;
                    }
            // Program never go here, because
            // "each input would have exactly one solution"
        }
};

int main() {
    Solution s;
    vector<int> in;
    int n, t;
    cin >> n;
    while (n--) {
        cin >> t;
        in.push_back(t);
    }
    cin >> t;
    in = s.twoSum(in, t);
    cout << in[0] << ' ' << in[1] << endl;
    return 0;
}

