/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-20 10:43:06
*  Descripton:  simulation 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
	// get number from ver[pos] into num
	void getNum(const string &version, int &len, int &pos, int &num) {
		num = 0;
		while (pos < len && version[pos] != '.') {
			num = num * 10 + version[pos] - '0';
			pos++;
		}
		pos++;
	}

public:
	int compareVersion(string version1, string version2) {
		int len1 = version1.length();
		int len2 = version2.length();
		int curPos1 = 0, curPos2 = 0;
		int num1, num2;
		while (curPos1 < len1 || curPos2 < len2) {
			getNum(version1, len1, curPos1, num1);
			getNum(version2, len2, curPos2, num2);
			if (num1 > num2)
				return 1;
			if (num1 < num2)
				return -1;
		}
		return 0;
	}
};

int main() {
	string a, b;
	Solution s;
	while (cin >> a >> b)
		cout << s.compareVersion(a, b) << endl;
	return 0;
}

