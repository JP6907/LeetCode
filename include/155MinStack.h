//
// Created by zjp on 18-12-12.
//

#ifndef LEETCODE_155MINSTACK_H
#define LEETCODE_155MINSTACK_H

/***************************
 * Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

    push(x) -- Push element x onto stack.
    pop() -- Removes the element on top of the stack.
    top() -- Get the top element.
    getMin() -- Retrieve the minimum element in the stack.

 * Example:
 * MinStack minStack = new MinStack();
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.getMin();   --> Returns -3.
    minStack.pop();
    minStack.top();      --> Returns 0.
    minStack.getMin();   --> Returns -2.
 */
#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> dataStack;
    stack<int> minStack;

    MinStack() {

    }

    void push(int x) {
        //这里需要 <=   可能存在多个相等的最小值，否则出栈一个后就找不到最小值了
        if(minStack.empty()||x<=minStack.top())
            minStack.push(x);
        dataStack.push(x);
    }

    void pop() {
        if(!dataStack.empty()){
            if(dataStack.top()==minStack.top())
                minStack.pop();
            dataStack.pop();
        }
    }

    int top() {
        return dataStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};
#endif //LEETCODE_155MINSTACK_H
