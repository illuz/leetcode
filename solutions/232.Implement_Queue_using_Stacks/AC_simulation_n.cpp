/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-07-26 16:52:32
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Queue {
private:
    stack<int> stk;
public:
    // Push element x to the back of queue.
    void push(int x) {
        stk.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        // reverse the stack first
        stack<int> stk2;
        while (!stk.empty()) {
            stk2.push(stk.top());
            stk.pop();
        }
        stk2.pop();
        while (!stk2.empty()) {
            stk.push(stk2.top());
            stk2.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        // reverse the stack first
        stack<int> stk2;
        while (!stk.empty()) {
            stk2.push(stk.top());
            stk.pop();
        }
        int top = stk2.top();
        while (!stk2.empty()) {
            stk.push(stk2.top());
            stk2.pop();
        }
        return top;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return stk.empty();
    }
};

int main() {

    return 0;
}

