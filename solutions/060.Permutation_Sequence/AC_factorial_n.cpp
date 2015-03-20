/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_factorial_n.cpp
*  Create Date: 2015-01-18 10:58:39
*  Descripton:  Use factorial. Named '康托' permutation. 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    int getFactorial(int n) {
        int ret = n;
        while (--n)
            ret *= n;
        return ret;
    }

public:
    string getPermutation(int n, int k) {
        int fac = getFactorial(n);
        string candi = string("123456789").substr(0, n);
        string res(n, '0');
        for (int i = 0; i < n; i++) {
            fac /= (n - i);
            int index = (k - 1) / fac;
            res[i] = candi[index];
            candi.erase(index, 1);
            k -= index * fac;
        }
        return res;
    }
};

int main() {
    int n, k;
    Solution s;
    while (cin >> n >> k)
        cout << s.getPermutation(n, k) << endl;
    return 0;
}

