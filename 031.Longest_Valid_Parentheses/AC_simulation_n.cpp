/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-01-26 10:45:35
*  Descripton:  Use O(1) space and O(n) time
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
	int longestValidParentheses(string s) {
		int max_len = 0, depth = 0, start = -1;

		// solve ()))
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '(')
				++depth;
			else {
				--depth;
				if (depth == 0)
					max_len = (max_len, i - start);
				else if (depth < 0) {
					start = i;
					depth = 0;
				}
			}
		}
		
		// solve ((()
		depth = 0;
		start = s.size();
		for (int i = s.size(); i >= 0; --i) {
			if (s[i] == ')')
				++depth;
			else {
				--depth;
				if (depth == 0)
					max_len = (max_len, start - i);
				else if (depth < 0) {
					start = i;
					depth = 0;
				}
			}
		}

		return max_len;
	}
};

int main() {
	string test;
	Solution s;
	while (cin >> test)
		cout << s.longestValidParentheses(test) << endl;
	return 0;
}

