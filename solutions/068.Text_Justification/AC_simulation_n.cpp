/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-03-04 10:57:18
*  Descripton:  Simulation
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Solution {
private:
    string getOneLine(vector<string> &words, int start, int end, int rest, int L) {
        string line = words[start];
        rest += (end - start);
        int even_space = rest + 1, num_of_more = 0;
        if (start != end) {
            even_space = rest / (end - start);
            num_of_more = rest - even_space * (end - start);
        }
        for (int i = start + 1; i <= end; ++i) {
            if (i - start <= num_of_more)
                line.append(even_space + 1, ' ');
            else
                line.append(even_space, ' ');
            line += words[i];
        }
        if (line.size() < L)
            line.append(L - line.size(), ' ');
        return line;
    }

public:
    vector<string> fullJustify(vector<string> &words, int L) {
        vector<string> ret;
        int sz = words.size();
        int start_pos = 0;
        int cur_len = 0;

        for (int i = 0; i < sz; ++i) {
            if (cur_len + words[i].length() > L) {
                ret.push_back(getOneLine(words, start_pos, i - 1, L - cur_len + 1, L));
                start_pos = i;
                cur_len = 0;
            }
            cur_len += words[i].length();
            cur_len += 1;
        }
        ret.push_back(getOneLine(words, start_pos, sz - 1, 0, L));
        return ret;
    }
};    

int main() {
    int n, l;
    cin >> n >> l;
    vector<string> w(n);
    for (auto &i : w)
        cin >> i;
    Solution s;
    vector<string> ans = s.fullJustify(w, l);
    for (auto &i : ans)
        cout << i << endl;

    return 0;
}

