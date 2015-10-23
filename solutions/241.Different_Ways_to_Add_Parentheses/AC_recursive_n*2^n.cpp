/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n*2^n.cpp
*  Create Date: 2015-10-23 14:03:11
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    vector<int> helper(string& input, int l, int r) {
        vector<int> ans;
        bool isNum = true;
        int num = 0;
        for (int i = l; i < r; ++i) {
            if (!isdigit(input[i])) {
                isNum = false;
                vector<int> L = helper(input, l, i), R = helper(input, i + 1, r);
                for (auto l : L)
                    for (auto r : R) {
                        if (input[i] == '+') ans.push_back(l + r);
                        else if (input[i] == '-') ans.push_back(l - r);
                        else ans.push_back(l * r);
                    }
            }
            if (isNum) 
                num = num * 10 + (input[i] - '0');
        }
        if (isNum)
            ans.push_back(num);
        return ans;
    }
public:
    vector<int> diffWaysToCompute(string input) {
        return helper(input, 0, input.length());
    }
};

int main() {
    Solution s;
    vector<int> ans;
    ans = s.diffWaysToCompute("0+1");
    for (auto i : ans) cout << i << ' ';
    cout << endl;
    ans = s.diffWaysToCompute("2-1-1");
    for (auto i : ans) cout << i << ' ';
    cout << endl;
    ans = s.diffWaysToCompute("2*3-4*5");
    for (auto i : ans) cout << i << ' ';
    cout << endl;
    return 0;
}

