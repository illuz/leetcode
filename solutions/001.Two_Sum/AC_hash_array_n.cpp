/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        ac_hash_array_n.cpp
*  Create Date: 2014-11-26 10:54:11
*  Descripton:  use array to save the status,
*                but if the MAXN is too large, it will Exeed Memory Limit
*                time:n, memory: MAXN
*/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 200002;
const int OFFSET = 100000;

class Solution {
    private:
        int idOfNum[N];
    public:
        vector<int> twoSum(vector<int> &numbers, int target) {
            vector<int> index;
            memset(idOfNum, 0, sizeof(idOfNum));

            int sz = numbers.size();
            for (int i = 0; i < sz; i++) {
                int rest = target - numbers[i];
                if (idOfNum[rest + OFFSET]) {
                    index.push_back(idOfNum[rest + OFFSET]);
                    index.push_back(i + 1);
                    return index;
                }
                idOfNum[numbers[i] + OFFSET] = i + 1;
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

