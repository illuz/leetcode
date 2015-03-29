/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_BFS_n.cpp
*  Create Date: 2015-03-29 13:40:10
*  Descripton:  
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    bool checkChar(string &str1, string &str2) {
        int diff = 0;
        for (int i = 0; i < str1.length(); ++i) {
            if (str1[i] != str2[i])
                ++diff;
            if (diff > 1)
                return false;
        }
        return diff == 1;
    }
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        if (start == end)
            return 1;
        if (dict.empty())
            return 0;

        queue<string> q;
        unordered_map<string, int> vis;
        unordered_set<string> unvis(dict);

        q.push(start);
        vis[start] = 1;
        unvis.insert(end);
        while (!q.empty()) {
            string str = q.front();
            q.pop();
            auto itr = unvis.begin();
            while (itr != unvis.end()) {
                string word = *itr;
                if (checkChar(word, str)) {
                    if (word == end)
                        return vis[str] + 1;
                    vis[word] = vis[str] + 1;
                    itr = unvis.erase(itr);
                    q.push(word);
                } else {
                    ++itr;
                }
            }
        }
        return 0;
    }
};

int main() {

    return 0;
}

