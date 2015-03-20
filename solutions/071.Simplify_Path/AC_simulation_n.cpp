/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-02-04 09:04:15
*  Descripton:  simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string simplifyPath(string path) {
        if (!path.empty() && path[path.length() - 1] != '/')
            path += '/';
        vector<string> folders;
        int cur = -1;
        for (auto &i : path) {
            if (i == '/') {
                if (cur >= 0 && folders[cur] == "..") {
                    folders.pop_back();
                    --cur;
                    if (cur >= 0)
                        folders[cur] = "";
                    else {
                        folders.push_back("");
                        ++cur;
                    }
                } else if (cur >= 0 && folders[cur] == ".") {
                    folders[cur] = "";
                } else if (cur < 0 || folders[cur] != "") {
                    folders.push_back("");
                    ++cur;
                }
            } else {
                folders[cur].push_back(i);
            }
        }

        string res = "";
        for (auto &i : folders)
            if (!i.empty())
                res += "/" + i;
        return res == "" ? "/" : res;
    }
};

int main() {
    string path;
    Solution s;
    while (cin >> path)
        cout << s.simplifyPath(path) << endl;
    return 0;
}

