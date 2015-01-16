/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_binary_nlogn.cpp
*  Create Date: 2015-01-16 09:42:12
*  Descripton:  Binary. Just use the bit.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

typedef long long ll;

class Solution {
public:
    int divide(int dividend, int divisor) {
		ll a = dividend >= 0 ? dividend : -(ll)dividend;
		ll b = divisor >= 0 ? divisor : -(ll)divisor;
		ll result = 0, c = 0;
		bool sign = (dividend > 0 && divisor < 0) ||
			(dividend < 0 && divisor > 0);

		while (a >= b) {
			c = b;
			for (int i = 0; a >= c; i++, c <<= 1) {
				a -= c;
				result += (1<<i);
			}
		}
		if (result > INT_MAX)
			result = INT_MAX;
		return sign ? -result : result;
    }
};

int main() {
	int a, b;
	Solution s;
	while (cin >> a >> b) {
		cout << s.divide(a, b) << endl;
	}
	return 0;
}

