/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_map_nlogn.cpp
*  Create Date: 2015-01-22 09:42:28
*  Descripton:  Using map, check the [words length] substring. 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) {
		map<string, int> words;
		map<string, int> curWords;
		vector<int> ret;
		int slen = S.length();
		if (!slen || L.empty()) return ret;
		int llen = L.size(), wlen = L[0].length();
		
		// record the current words map
		for (auto &i : L)
			++words[i];

		// check the [llen * wlen] substring
		for (int i = 0; i + llen * wlen <= slen; i++) {
			curWords.clear();
			int j = 0;
			// check the words
			for (j = 0; j < llen; j++) {
				string tmp = S.substr(i + j * wlen, wlen);
				if (words.find(tmp) == words.end())
					break;
				++curWords[tmp];
				if (curWords[tmp] > words[tmp])
					break;
			}
			if (j == llen)
				ret.push_back(i);
		}
		return ret;
    }
};

int main() {
	Solution s;
	string S;
	int n;
	while (cin >> n) {
		vector<string> L(n);
		cin >> S;
		for (auto &i : L)
			cin >> i;
		vector<int> ret = s.findSubstring(S, L);
		for (auto &i : ret)
			cout << i << ' ';
		cout << endl;
	}
	return 0;
}

