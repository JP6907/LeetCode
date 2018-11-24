//
// Created by zjp on 18-11-24.
//

#ifndef LEETCODE_58LENGTHOFLASTWORD_H
#define LEETCODE_58LENGTHOFLASTWORD_H

/*************************************
 * Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

    If the last word does not exist, return 0.

    Note: A word is defined as a character sequence consists of non-space characters only.

 * Input: "Hello World"
    Output: 5
 */
#include "string"
#include "sstream"
using namespace std;

int lengthOfLastWord(string s) {
    istringstream istr(s);
    string temp;
    while(istr >> temp);
    return temp.size();
}
#endif //LEETCODE_58LENGTHOFLASTWORD_H
