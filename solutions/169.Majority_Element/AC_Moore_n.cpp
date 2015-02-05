/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_Moore_n.cpp
*  Create Date: 2015-02-05 10:41:09
*  Descripton:  Moore vote algorithm.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
	int majorityElement(vector<int> &num) {
		int count = 0;
		int major;
		for (auto &i : num) {
			if (count == 0)
				major = i;
			if (i == major)
				count++;
			else
				cout--;
		}
		return major;
	}
};

int main() {

	return 0;
}

