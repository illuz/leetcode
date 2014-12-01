/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_bruteforce_n!.cpp
*  Create Date: 2014-12-01 08:11:49
*  Descripton:  I guess its complexity is n! (worst)
*				if p[j+1] == '*' -> (i+1,j+1)
*				else if p[i] == p[j] -> (i+1, j+2) or (i, j+2)
*				else -> (i, j+2)
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isMatch(const char *s, const char *p) {
		if (!p[0])
			return !s[0];

		int slen = strlen(s), plen = strlen(p);
		if (plen == 1 || p[1] != '*')
			return slen && (p[0] == '.' || s[0] == p[0])
				&& isMatch(s + 1, p + 1);
		while (s[0] && (p[0] == '.' || s[0] == p[0]))
			if (isMatch(s++, p + 2))
				return true;
		return isMatch(s, p + 2);
	}
};

int main() {
	Solution s;
	char a[100], b[100];
	while (cin >> a >> b)
		cout << s.isMatch(a, b) << endl;
	return 0;
}

