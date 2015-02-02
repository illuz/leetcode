/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bruteforce_n2.cpp
*  Create Date: 2014-12-03 22:21:37
*  Descripton:  bruteforce
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
		int minsz = 0;
		string ret;
		for (int i = 0; i < strs.size(); i++)
			minsz = max(minsz, (int)strs[i].length());
		for (int i = 0; i < minsz; i++) {
			bool ok = true;
			for (int j = 1; j < strs.size(); j++)
				if (strs[j][i] != strs[0][i])
					ok = false;
			if (!ok)
				break;
			ret += strs[0][i];
		}
		return ret;
    }
};

int main() {
	Solution s;
	int n;
	string t;
	while (cin >> n) {
		vector<string> strs;;
		while (n--) {
			cin >> t;
			strs.push_back(t);
		}
		cout << s.longestCommonPrefix(strs) << endl;
	}
	return 0;
}

