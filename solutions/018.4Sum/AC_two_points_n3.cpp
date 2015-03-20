/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n3.cpp
*  Create Date: 2015-01-11 14:43:50
*  Descripton:  Two points just like 3sum
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int> > ret;
        int len = num.size();

        if (len <= 3)
            return ret;

        sort(num.begin(), num.end());

        for (int i = 0; i <= len - 4; i++) {
            for (int m = i + 1; m <= len - 3; m++) {
                int j = m + 1;
                int k = len - 1;
                while (j < k) {
                    if (num[i] + num[m] + num[j] + num[k] < target) {
                        ++j;
                    } else if (num[i] + num[m] +  num[j] + num[k] > target) {
                        --k;
                    } else {
                        ret.push_back({ num[i], num[m], num[j], num[k] });
                        ++j;
                        --k;
                        while (j < k && num[j] == num[j - 1])
                            ++j;
                        while (j < k && num[k] == num[k + 1])
                            --k;
                    }
                }
                while (m < len && num[m] == num[m + 1])
                    ++m;
            }
            while (i < len && num[i] == num[i + 1])
                ++i;
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
    vector<vector<int> > ret = s.fourSum(num, tar);
    for (auto &i : ret) {
        for (auto &j : i)
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}

