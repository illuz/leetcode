/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n2.cpp
*  Create Date: 2015-01-10 13:47:11
*  Descripton:  Just like 3Sum.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int ret = num[0] + num[1] + num[2];
        int len = num.size();

        sort(num.begin(), num.end());

        for (int i = 0; i <= len - 3; i++) {
            // first number : num[i]
            int j = i + 1;    // second number
            int k = len - 1;    // third number
            while (j < k) {
                int sum = num[i] + num[j] + num[k];
                if (abs(sum - target) < abs(ret - target))
                    ret = sum;
                if (sum < target) {
                    ++j;
                } else if (sum > target) {
                    --k;
                } else {
                    ++j;
                    --k;
                }
            }
        }
        return ret;
    }
};

int main() {
    vector<int> num;
    int n, tar;
    cin >> tar;
    while (~scanf("%d", &n))
        num.push_back(n);
    Solution s;
    cout << s.threeSumClosest(num, tar) << endl;
    return 0;
}

