/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_search_log(nm).cpp
*  Create Date: 2014-12-28 14:58:07
*  Descripton:  regard the matrix as an array
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, r = n * m - 1, mid = 0;
        while (l < r) {
            mid = l + (r - l) / 2;
            if (matrix[mid/m][mid%m] < target)
                l = mid + 1;
            else
                r = mid;
        }
        return matrix[l/m][l%m] == target;
    }
};

int main() {
    return 0;
}

