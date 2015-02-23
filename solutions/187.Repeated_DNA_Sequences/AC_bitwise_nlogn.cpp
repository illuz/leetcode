/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bitwise_nlogn.cpp
*  Create Date: 2015-02-24 00:57:54
*  Descripton:  Bitwise, using STL set.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
	int get_value(char ch) {
		switch (ch) {
			case 'A': return 0; break;
			case 'C': return 1; break;
			case 'G': return 2; break;
			case 'T': return 3; break;
		}
	}

public:
	vector<string> findRepeatedDnaSequences(string s) {
		set<long long> appeared, used;
		vector<string> ans;
		if (s.length() <= 10)
			return ans;

		long long hash = 0;
		// get first substring's hash
		for (int i = 0; i < 10; i++)
			hash = (hash << 2) | get_value(s[i]);
		appeared.insert(hash);

		// deal every substring
		for (int i = 10; i < s.length(); ++i) {
			hash = ((1LL<<20) - 1) & ((hash << 2) | get_value(s[i]));
			if (used.count(hash))
				continue;
			if (appeared.count(hash)) {
				ans.push_back(s.substr(i - 9, 10));
				used.insert(hash);
			} else
				appeared.insert(hash);
		}

		return ans;
	}
};

int main() {
	string ss;
	Solution s;
	while (cin >> ss) {
		vector<string> ans = s.findRepeatedDnaSequences(ss);
		for (auto &i : ans)
			cout << i << ", ";
		cout << endl;
	}
	return 0;
}

