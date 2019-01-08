//
// Created by zjp on 18-12-29.
//

#ifndef LEETCODE_43MULTIPLYSTRINGS_H
#define LEETCODE_43MULTIPLYSTRINGS_H

/*********************************
 * Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

    Example 1:
    Input: num1 = "2", num2 = "3"
    Output: "6"

    Example 2:
    Input: num1 = "123", num2 = "456"
    Output: "56088"

    Note:
    The length of both num1 and num2 is < 110.
    Both num1 and num2 contain only digits 0-9.
    Both num1 and num2 do not contain any leading zero, except the number 0 itself.
    You must not use any built-in BigInteger library or convert the inputs to integer directly.
 */

#include <string>
#include <math.h>
using namespace std;

string multiply(string num1, string num2) {
    int i,j;
    long result=0;
    for(j=num2.size()-1;j>=0;j--){
        int temp=0; //进位
        long tempResult = 0;
        int a = num2[j]-'0';
        for(i=num1.size()-1;i>=0;i--){
            int pro = (a*(num1[i]-'0')+temp);
            int shift = num1.size()-1-i;
            long shiftMul = pow(10,shift);
            tempResult = pro%10*shiftMul + tempResult;
            temp = pro/10;
        }
        if(temp>0)
            tempResult = temp*pow(10,num1.size())+tempResult;
        int shift = num2.size()-1-j;
        long shiftMul = pow(10,shift);
        result += tempResult*shiftMul;
    }

    return to_string(result);
}
#endif //LEETCODE_43MULTIPLYSTRINGS_H
