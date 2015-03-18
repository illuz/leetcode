/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_logn.cpp
*  Create Date: 2015-03-18 15:16:39
*  Descripton:  
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int findMin(vector<int> &num) {
        int left = 0, right = num.size() - 1;
        int mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (num[left] <= num[mid] && num[mid] <= num[right]) {
                return num[left];
            } else if (num[left] <= num[mid]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return num[0];
    }
};

int main() {
    vector<int> num;
    num.push_back(3);
    num.push_back(1);
    num.push_back(2);
    Solution s;
    cout << s.findMin(num) << endl;
    return 0;
}

