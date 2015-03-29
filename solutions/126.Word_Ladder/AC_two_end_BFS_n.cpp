/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_end_BFS_n.cpp
*  Create Date: 2015-03-29 14:11:47
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
// it cost a lot of time
// private:
//     bool checkChar(string &str1, string &str2) {
//         int diff = 0;
//         for (int i = 0; i < str1.length(); ++i) {
//             if (str1[i] != str2[i])
//                 ++diff;
//             if (diff > 1)
//                 return false;
//         }
//         return diff == 1;
//     }

public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // use unordered_set as queue
        unordered_set<string> startSet, endSet, *set1, *set2;

        startSet.insert(start);
        endSet.insert(end);
        int dis = 1, len = start.length();
        while (!startSet.empty() && !endSet.empty()) {
            if (startSet.size() > endSet.size()) {
                set1 = &startSet;
                set2 = &endSet;
            } else {
                set1 = &endSet;
                set2 = &startSet;
            }

            ++dis;

            unordered_set<string> newset1;
            for (auto itr = set1->begin(); itr != set1->end(); itr++) {
                string old = *itr;
                for (int i = 0; i < len; ++i) {
                    char tmp = old[i];
                    for (int j = 0; j < 26; ++j) {
                        old[i] = 'a' + j;
                        auto f = set2->find(old);
                        if (f != set2->end())
                            return dis;
                        f = dict.find(old);
                        if (f != dict.end()) {
                            newset1.insert(old);
                            dict.erase(f);
                        }
                    }
                    old[i] = tmp;
                }
            }
            swap(newset1, *set1);
        }
        return 0;
    }
};

int main() {

    return 0;
}

