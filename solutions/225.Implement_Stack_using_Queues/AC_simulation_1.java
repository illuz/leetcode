/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_simulation_1.java
*  Create Date: 2015-07-25 12:22:04
*  Descripton:   
*/

import java.util.LinkedList;
import java.util.Queue;

class MyStack {
    private Queue queue;

    // Push element x onto stack.
    public void push(int x) {
        Queue q = new LinkedList();
        q.add(x);
        q.add(queue);
        queue = q;
    }

    // Removes the element on top of the stack.
    public void pop() {
        queue.remove();
        queue = (Queue)queue.peek();
    }

    // Get the top element.
    public int top() {
        return (int)queue.peek();
    }

    // Return whether the stack is empty.
    public boolean empty() {
        return queue == null;
    }
}