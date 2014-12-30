/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2014-12-30 10:29:44
*  Descripton:  I found that in the previous solutions I regarded
*               the array as unsorted.
*               This version I will solve it as sorted.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
		if (!n)
			return 0;
		int ret = 1;
		for (int i = 1; i < n; i++)
			if (A[i] != A[i - 1])
				A[ret++] = A[i];
		return ret;
	}
};

int main() {
	Solution s;
	int n, A[100];
	while (cin >> n) {
		for (int i = 0; i < n; i++)
			scanf("%d", &A[i]);
		cout << s.removeDuplicates(A, n) << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << ' ';
		cout << endl;
	}
	return 0;
}

