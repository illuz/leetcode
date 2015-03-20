/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bucket_sort_n.cpp
*  Create Date: 2015-03-20 09:21:02
*  Descripton:  Just like the Bucket Sort
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maximumGap(vector<int> &num) {
        int len = num.size();
        if (len < 2) return 0;
        if (len == 2) return abs(num[0] - num[1]);
        int mmax = num[0], mmin = num[0];

        // find out the max, min
        for (auto i : num) {
            mmax = max(mmax, i);
            mmin = min(mmin, i);
        }
        if (mmin == mmax)
            return 0;

        // bucket sort
        int bucket_size = (mmax - mmin) / (len - 1);
        if (bucket_size <= 1)
            return mmax - mmin;
        int bucket_num = (mmax - mmin) / bucket_size + 1;
        vector<int> max_bucket(bucket_num, INT_MIN);
        vector<int> min_bucket(bucket_num, INT_MAX);
        for (auto i : num) {
            int j = (i - mmin) / bucket_size;
            max_bucket[j] = max(max_bucket[j], i);
            min_bucket[j] = min(min_bucket[j], i);
        }

        // solve
        int ret = 0;
        int last_max = mmin;    // this dosen't matter, because the max_gap will more large
        for (int i = 0; i < bucket_num; ++i) {
            if (max_bucket[i] != INT_MIN) {
                // there are some numbers
                ret = max(ret, min_bucket[i] - last_max);
                last_max = max_bucket[i];
            }
        }

        return ret;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (auto &i :  num)
        cin >> i;
    Solution s;
    cout << s.maximumGap(num) << endl;
    return 0;
}

