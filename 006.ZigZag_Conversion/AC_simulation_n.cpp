/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-11-29 22:56:28
*  Descripton:  simulation it
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	string convert(string s, int nRows) {
		if (nRows == 1) return s;
		int step = nRows * 2 - 2, len = s.length();
		string ret = "";
		// first row
		for (int i = 0; i < len; i += step)
			ret += s[i];
		for (int i = 1; i < nRows - 1; i++) {
			for (int j = i; j < len; j += step) {
				ret += s[j];
				if (j + (step - i * 2) < len)
					ret += s[j + (step - i * 2)];
			}
		}
		// last row
		for (int i = nRows - 1; i < len; i += step)
			ret += s[i];
		return ret;
	}
};

int main() {
	Solution a;
	string s;
	int n;
	while (cin >> s >> n)
		cout << a.convert(s, n) << endl;
	return 0;
}

