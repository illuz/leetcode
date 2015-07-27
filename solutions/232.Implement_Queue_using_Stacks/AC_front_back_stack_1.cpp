/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_front_back_stack_1.cpp
*  Create Date: 2015-07-27 09:41:49
*  Descripton:   
*/


#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class Queue {
private:
    stack<int> stack_front;
    stack<int> stack_back;
    void back_to_front() {
        while (!stack_back.empty()) {
            stack_front.push(stack_back.top());
            stack_back.pop();
        }
    }

public:
    // Push element x to the back of queue.
    void push(int x) {
        stack_back.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if (stack_front.empty()) {
            back_to_front();
        }
        return stack_front.pop();
    }

    // Get the front element.
    int peek(void) {
        if (stack_front.empty()) {
            back_to_front();
        }
        return stack_front.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return stack_front.empty() && stack_back.empty();
    }
};

int main() {

    return 0;
}

