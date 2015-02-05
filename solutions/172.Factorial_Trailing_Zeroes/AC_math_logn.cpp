/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_math_logn.cpp
*  Create Date: 2015-02-05 11:34:26
*  Descripton:  See my blog:
*               blog.csdn.net/hcbbt/article/details/27110103
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
public:
    int trailingZeroes(int n) {
		int ans = 0;
		while (n != 0) {
			ans += n / 5;
			n /= 5;
		}
		return ans;
    }
};

int main() {
	return 0;
}

