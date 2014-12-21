/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-21 08:19:49
*  Descripton:  simulation 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    bool isPalindrome(string s) {
		int left = 0, right = s.length() - 1;
		while (left < right) {
			if (!isalpha(s[left]) && !isdigit(s[left]))
				left++;
			else if (!isalpha(s[right]) && !isdigit(s[right]))
				right--;
			else if (tolower(s[left]) != tolower(s[right]))
				return false;
			else
				left++, right--;
		}
		return true;
    }
};

int main() {
	string a;
	Solution s;
	while (getline(cin, a))
		cout << s.isPalindrome(a) << endl;
	return 0;
}

