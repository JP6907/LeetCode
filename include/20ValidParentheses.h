//
// Created by zjp on 18-11-22.
//

#ifndef LEETCODE_20VALIDPARENTHESES_H
#define LEETCODE_20VALIDPARENTHESES_H

/***********************************
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

    An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.

    Input: "()"
Output: true

     Input: "()[]{}"
    Output: true

     Input: "(]"
    Output: false

     Input: "([)]"
    Output: false

     Input: "{[]}"
    Output: true
 */
#include <string>
#include <stack>
using namespace std;

bool isValid(string s) {
    if(s.size()==0)
        return true;

    stack<char> sta;
    for(char c : s){
        if(c=='{'||c=='['||c=='(')
            sta.push(c);
        else if(!sta.empty()){
            switch (c){
                case '}':
                    if(sta.top()!='{')
                        return false;
                    else
                        sta.pop();
                    break;
                case ']':
                    if(sta.top()!='[')
                        return false;
                    else
                        sta.pop();
                    break;
                case ')':
                    if(sta.top()!='(')
                        return false;
                    else
                        sta.pop();
                    break;
                default:
                    return false;
            }
        } else
            return false;
    }
    return sta.empty();
}


#endif //LEETCODE_20VALIDPARENTHESES_H
