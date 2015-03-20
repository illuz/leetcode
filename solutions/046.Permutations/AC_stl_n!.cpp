/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stl_n!.cpp
*  Create Date: 2014-12-24 11:39:42
*  Descripton:  use STL next_permutation(). 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        sort(num.begin(), num.end());
        vector<vector<int> > res;
        do {
            res.push_back(num);
        } while (next_permutation(num.begin(), num.end()));
        return res;
    }
};

int main() {

    return 0;
}

