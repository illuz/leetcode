/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_hashmap_nlog.cpp
*  Create Date: 2015-01-02 11:15:47
*  Descripton:  hashmap, use map to record the sorted string
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        vector<string> ans;
        map<string, vector<int> > rec;
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            rec[str].push_back(i);
        }
        for (auto &it : rec) {
            if (it.second.size() > 1) {
                for (auto &ind : it.second)
                    ans.push_back(strs[ind]);
            }
        }
        return ans;
    }
};

int main() {

    return 0;
}

