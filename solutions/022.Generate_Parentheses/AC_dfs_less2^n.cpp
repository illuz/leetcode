/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_dfs_less2^n.cpp
*  Create Date: 2014-12-25 10:35:11
*  Descripton:  dfs
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
	string tmp;
	void dfs(vector<string> &v, int pos, int n, int used) {
		if (pos == n * 2) {
			cout << tmp << endl;
			v.push_back(tmp);
			return;
		}
		if (used < n) {
			tmp.push_back('(');
			dfs(v, pos + 1, n, used + 1);
			tmp.pop_back();
		}
		if (used * 2 > pos) {
			tmp.push_back(')');
			dfs(v, pos + 1, n, used);
			tmp.pop_back();
		}
	}

public:
    vector<string> generateParenthesis(int n) {
		vector<string> res;
		if (n == 0)
			return res;
		tmp = "";
		dfs(res, 0, n, 0);
		return res;
    }
};

int main() {
	Solution s;
	int n;
	while (cin >> n)
		s.generateParenthesis(n);
	return 0;
}

