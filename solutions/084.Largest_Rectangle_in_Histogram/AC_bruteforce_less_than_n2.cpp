/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bruteforce_less_than_n2.cpp
*  Create Date: 2015-03-07 15:18:16
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        int ret = 0;
        int len = height.size();
        for (int i = 0; i < len; ++i)
            if (i + 1 >= len || height[i] > height[i + 1]) {
                int mmin = INT_MAX;
                for (int j = i; j >= 0; --j) {
                    mmin = min(mmin, height[j]);
                    ret = max(ret, mmin * (i - j + 1));
                }
            }
        return ret;
    }
};

int main() {

    return 0;
}

