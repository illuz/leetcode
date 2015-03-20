/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n.cpp
*  Create Date: 2014-12-31 11:13:00
*  Descripton:  left point and right point 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int lpoint = 0, rpoint = height.size() - 1;
        int area = 0;
        while (lpoint < rpoint) {
            area = max(area, min(height[lpoint], height[rpoint]) *
                    (rpoint - lpoint));
            if (height[lpoint] > height[rpoint])
                rpoint--;
            else
                lpoint++;
        }
        return area;
    }
};

int main() {

    return 0;
}

