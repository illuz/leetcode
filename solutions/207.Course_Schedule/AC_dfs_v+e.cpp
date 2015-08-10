/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_v+e.cpp
*  Create Date: 2015-08-10 19:36:45
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        if (numCourses == 0 || prerequisites.empty())
            return true;
        graph = vector<vector<int> >(numCourses);
        vis = vector<int>(numCourses, 0); // not visit
        for (auto i : prerequisites) {
            graph[i.second].push_back(i.first);
        }
        for (int u = 0; u < numCourses; ++u) {
            if (0 == vis[u] && !dfs(u))
                return false;
        }
        return true;
    }
private:
    vector<vector<int> > graph;
    vector<int> vis;
    bool dfs(int u) {
        vis[u] = 1; // visiting
        for (auto v : graph[u]) {
            if (vis[v] == 1)
                return false;
            if (dfs(v) == false)
                return false;
        }
        vis[u] = 2; // visited
        return true;
    };
};

int main() {

    return 0;
}

