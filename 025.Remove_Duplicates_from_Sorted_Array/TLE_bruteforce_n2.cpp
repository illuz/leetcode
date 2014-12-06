/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        TLE_bruteforce_n2.cpp
*  Create Date: 2014-12-06 21:35:40
*  Descripton:  brute force, n*n
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
		int ret = 0;
		for (int i = 0; i < n; i++) {
			bool found = false;
			for (int j = i + 1; j < n; j++)
				if (A[i] == A[j]) {
					found = true;
					break;
				}
			if (!found)
				A[ret++] = A[i];
		}
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
	}
	return 0;
}

