/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_two_points_n2.cpp
*  Create Date: 2015-01-09 17:06:45
*  Descripton:  Regard one number as already concern, use the 2sum solution
*               Sort(nlogn) and n * two-points(n): O(n2)
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
		vector<vector<int> > ret;
		int len = num.size();
		int tar = 0;

		if (len <= 2)
			return ret;

		sort(num.begin(), num.end());

		for (int i = 0; i <= len - 3; i++) {
			// first number : num[i]
			int j = i + 1;	// second number
			int k = len - 1;	// third number
			while (j < k) {
				if (num[i] + num[j] + num[k] < tar) {
					++j;
				} else if (num[i] + num[j] + num[k] > tar) {
					--k;
				} else {
					ret.push_back({ num[i], num[j], num[k] });
					++j;
					--k;
					while (j < k && num[j] == num[j - 1])
						++j;
					while (j < k && num[k] == num[k + 1])
						--k;
				}
			}
			while (i < len && num[i] == num[i + 1])
				++i;
		}

		// sort and unique will cost a lot of time and course TLE
		// sort(ret.begin(), ret.end());
		// ret.erase(unique(ret.begin(), ret.end()), ret.end());
		return ret;
    }
};

int main() {
	vector<int> num;
	int n;
	while (~scanf("%d", &n))
		num.push_back(n);
	Solution s;
	vector<vector<int> > ret = s.threeSum(num);
	for (auto &i : ret) {
		for (auto &j : i)
			cout << j << ' ';
		cout << endl;
	}
	return 0;
}

