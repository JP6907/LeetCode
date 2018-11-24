//
// Created by zjp on 18-11-24.
//

#ifndef LEETCODE_66PLUSONE_H
#define LEETCODE_66PLUSONE_H

/****************************
 * Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

    The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

    You may assume the integer does not contain any leading zero, except the number 0 itself.

 * Input: [1,2,3]
    Output: [1,2,4]
    Explanation: The array represents the integer 123.

 * Input: [4,3,2,1]
    Output: [4,3,2,2]
    Explanation: The array represents the integer 4321.
 */
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int len = digits.size();
    if(digits[len-1]!=9)
        digits[len-1]++;
    else{
        int i=len-1;
        for(;i>=0&&digits[i]==9;i--) {
            digits[i] = 0;
        }
        if(i>=0)
            digits[i]++;
        else{
            digits.insert(digits.begin(),1);
        }
    }
    return digits;
}
#endif //LEETCODE_66PLUSONE_H
