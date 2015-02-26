/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_sort_nlogn.cpp
*  Create Date: 2015-02-26 10:13:18
*  Descripton:  sort + cmp
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
	static bool cmp(string a, string b) {
		return (a + b) > (b + a);
	}

public:
    string largestNumber(vector<int> &num) {
		vector<string> str;
		for (auto &i : num)
			str.push_back(to_string(i));

		sort(str.begin(), str.end(), cmp);

		string ans;
		if (str[0] == "0")
			return "0";
		for (auto &i : str)
			ans += i;

		return ans;
    }
};

int main() {
	int n, t;
	Solution s;
	cin >> n;
	vector<int> num(n);
	for (auto &i : num)
		cin >> i;
	cout << s.largestNumber(num) << endl;
	return 0;
}

