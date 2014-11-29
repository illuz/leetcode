/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-11-30 00:38:29
*  Descripton:  simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isPalindrome(int x) {
		if (x < 0) return false;
		int bit[10];
		int cnt = 0;
		while (x) {
			bit[cnt++] = x % 10;
			x /= 10;
		}
		for (int i = 0; i < cnt; i++)
			if (bit[i] != bit[cnt - i - 1])
				return false;
		return true;
    }
};

int main() {
	Solution a;
	int x;
	while (cin >> x)
		cout << a.isPalindrome(x) << endl;
	return 0;
}

