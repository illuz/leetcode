/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_n.cpp
*  Create Date: 2015-01-21 09:44:46
*  Descripton:  dfs
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

// Definition for undirected graph.
struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};

typedef unordered_map<int, UndirectedGraphNode *> immap;

class Solution {
private:
	immap gmap;

	UndirectedGraphNode *dfs(UndirectedGraphNode *node) {
		UndirectedGraphNode *newnode;
		if (gmap.find(node->label) == gmap.end()) {
			newnode = new UndirectedGraphNode(node->label);
			gmap.insert(immap::value_type(node->label, newnode));
			for (auto &i : node->neighbors)
				newnode->neighbors.push_back(dfs(i));
		} else {
			newnode = gmap[node->label];
		}

		return newnode;
	}

public:
	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
		if (!node)
			return NULL;

		gmap.clear();
		UndirectedGraphNode *ret = dfs(node);
		return ret;
	}
};

int main() {
	Solution s;
	UndirectedGraphNode *a = new UndirectedGraphNode(0), *b;
	b = s.cloneGraph(a);
	return 0;
}

