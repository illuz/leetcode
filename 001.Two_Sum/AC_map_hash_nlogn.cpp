/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        ac_hash_map_nlogn.cpp
*  Create Date: 2014-11-26 11:09:16
*  Descripton:  Save with map.
*				time:nlogn, memory:nlogn
*/

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

class Solution {
	private:
		map<int, int> idOfNum;
	public:
		vector<int> twoSum(vector<int> &numbers, int target) {
			vector<int> index;
			idOfNum.clear();

			int sz = numbers.size();
			for (int i = 0; i < sz; i++) {
				int rest = target - numbers[i];
				if (idOfNum.find(rest) != idOfNum.end()) {
					index.push_back(idOfNum[rest]);
					index.push_back(i + 1);
					return index;
				}
				idOfNum[numbers[i]] = i + 1;
			}
			// Program never go here, because
			// "each input would have exactly one solution"
		}
};

int main() {
	Solution s;
	vector<int> in;
	int n, t;
	cin >> n;
	while (n--) {
		cin >> t;
		in.push_back(t);
	}
	cin >> t;
	in = s.twoSum(in, t);
	cout << in[0] << ' ' << in[1] << endl;
	return 0;
}


