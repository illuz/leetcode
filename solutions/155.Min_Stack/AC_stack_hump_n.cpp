/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_stack_hump_n.cpp
*  Create Date: 2014-12-21 08:36:17
*  Descripton:  use an array to simulate->TLE
*				use two arrays to simulate->MLE
*				use two vectors to sismulate->MLE
*				use two stack to simulate->MLE
*
*				Correct solution:
*				record only the min elements in minstack,
*				just like hump
*				use O(n) time, O(n) space
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class MinStack {
private:
	stack<int> stk;
	stack<int> mstk;
public:
    void push(int x) {
		if (mstk.empty() || x <= mstk.top())
			mstk.push(x);
		stk.push(x);
    }

    void pop() {
		if (stk.top() == mstk.top())
			mstk.pop();
		stk.pop();
    }

    int top() {
		return stk.top();
    }

    int getMin() {
		return mstk.top();
    }
};

int main() {

	return 0;
}

