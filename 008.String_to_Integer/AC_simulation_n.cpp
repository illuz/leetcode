/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-11-30 00:21:56
*  Descripton:  simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int atoi(const char *str) {
		int ret = 0;
		if (sscanf(str, "%d", &ret) != 1) return 0;
		return ret;
    }
};

int main() {
	char str[100];
	Solution a;
	while (~scanf("%s", str))
		cout << a.atoi(str) << endl;
	return 0;
}

