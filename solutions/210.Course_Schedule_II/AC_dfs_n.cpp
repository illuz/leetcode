/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2016-02-27 12:00:45
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        graph = vector<vector<int> >(numCourses);
        vis = vector<int>(numCourses);

        vector<int> inorder(numCourses);
        vector<int> path;
        // generate the tree map
        for (auto prerequisite : prerequisites) {
            graph[prerequisite.second].push_back(prerequisite.first);
            inorder[prerequisite.first] += 1;
        }
        // find out 0-in-order node and dfs
        for (int i = 0; i < numCourses; ++i) {
            if (inorder[i] == 0) {
                if (dfs(i, path) == false) // can not topsort
                    return vector<int>();
            }
        }
        if (path.size() != numCourses)
            return vector<int>();
        reverse(path.begin(), path.end());
        return path;
    }
private:
    vector<vector<int> > graph;
    vector<int> vis;

    bool dfs(int id, vector<int> &path) {
        vis[id] = 1; // visiting
        for (auto toid : graph[id]) {
            if (vis[toid] == 1)
                return false;
            if (vis[toid] == 2)
                continue;
            if (dfs(toid, path) == false)
                return false;
        }
        vis[id] = 2; // visited
        path.push_back(id);
        return true;
    }
};

int main() {
    Solution s;
    vector<pair<int, int>> prerequisites;
    prerequisites.push_back(pair<int, int>(0, 2));
    prerequisites.push_back(pair<int, int>(2, 0));
    prerequisites.push_back(pair<int, int>(1, 2));
    vector<int> res = s.findOrder(3, prerequisites);
    for (auto x : res) cout << x << ' ';
    return 0;
}

