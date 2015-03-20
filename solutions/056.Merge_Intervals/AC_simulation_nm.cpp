/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_nm.cpp
*  Create Date: 2015-01-23 10:21:53
*  Descripton:  Time: O(n1+n2+..) 
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

struct Interval {
int start;
    int end;
    Interval() : start(0), end(0) { }
    Interval(int s, int e) : start(s), end(e) { }
};

class Solution {
private:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        auto it = intervals.begin();
          auto it_head = it;                // head of erase items
        while (it != intervals.end()) {
            if (newInterval.end < it->start) {
                it = intervals.erase(it_head, it);
                intervals.insert(it, newInterval);
                return intervals;
            } else if (newInterval.start > it->end) {
                it++;
                it_head++;
            } else {
                newInterval.start = min(newInterval.start, it->start);
                newInterval.end = max(newInterval.end, it->end);
                // not erase immediately
                // it = intervals.erase(it);
                it++;
            }
        }

        if (it_head != it)
            it = intervals.erase(it_head, it);
        intervals.insert(intervals.end(), newInterval);
        return intervals;
    }
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> res;
        for (auto &i : intervals)
            insert(res, i);
        return res;
    }
};

int main() {
    int a, b, n;
    vector<Interval> itv;
    Solution s;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        itv.push_back(Interval(a, b));
    }
    itv = s.merge(itv);
    for (auto &i : itv)
        cout << i.start << ' ' << i.end << endl;
    return 0;
}

