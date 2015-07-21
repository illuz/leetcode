/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_n.cpp
*  Create Date: 2015-07-20 21:13:54
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Stack {
private:
    queue<int> q;

public:
    // Push element x onto stack.
    void push(int x) {
        q.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        queue<int> q2(q);
        while (!q.empty())
            q.pop();
        while (q2.empty()) {
            int tmp = q2.front();
            q2.pop();
            if (q2.empty()) // ignore last element in q2
                break;
            q.push(tmp);
        }
    }

    // Get the top element.
    int top() {
        queue<int> q2(q);
        while (q2.empty()) {
            int tmp = q2.front();
            q2.pop();
            if (q2.empty()) // ignore last element in q2
                return tmp;
        }
    }

    // Return whether the stack is empty.
    bool empty() {
        return q.empty();
    }
};

int main() {

    return 0;
}

