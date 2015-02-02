/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        ac_two_points_nlogn.cpp
*  Create Date: 2014-11-27 14:16:10
*  Descripton:  sort and find the answer with two points
*/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 0;

class Solution {
	public:
		vector<int> twoSum(vector<int> &numbers, int target) {
			int sz = numbers.size();
			int left = 0, right = sz - 1, sum = 0;

			vector<int> sorted (numbers);
			std::sort(sorted.begin(), sorted.end());

			vector<int> index;
			while (left < right) {
				sum = sorted[left] + sorted[right];
				if (sum == target) {
					// find the answer
					for (int i = 0; i < sz; i++) {
						if (numbers[i] == sorted[left])
							index.push_back(i + 1);
						else if (numbers[i] == sorted[right])
							index.push_back(i + 1);
						if (index.size() == 2)
							return index;
					}
				} else if (sum > target) {
					right--;
				} else {
					left++;
				}
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

