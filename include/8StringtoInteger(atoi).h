//
// Created by zjp on 18-12-18.
//

#ifndef LEETCODE_8STRINGTOINTEGER_ATOI_H
#define LEETCODE_8STRINGTOINTEGER_ATOI_H

/***************************************
 * Implement atoi which converts a string to an integer.
    The function first discards as many whitespace characters as necessary until the first non-whitespace character is found.
   Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible,
    and interprets them as a numerical value.
   The string can contain additional characters after those that form the integral number,
     which are ignored and have no effect on the behavior of this function.
   If the first sequence of non-whitespace characters in str is not a valid integral number,
     or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.
   If no valid conversion could be performed, a zero value is returned.

    Note:
    Only the space character ' ' is considered as whitespace character.
    Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1].
     If the numerical value is out of the range of representable values, INT_MAX (231 − 1) or INT_MIN (−231) is returned.

 * Input: "42"
    Output: 42

 * Input: "   -42"
    Output: -42
    Explanation: The first non-whitespace character is '-', which is the minus sign.
                 Then take as many numerical digits as possible, which gets 42.

 * Input: "4193 with words"
    Output: 4193
    Explanation: Conversion stops at digit '3' as the next character is not a numerical digit.
 */
#include <string>
using namespace std;

int myAtoi(string str) {
    int i;
    int len = str.size();
    long result = 0;
    int temp = 1;
    for(i=0;i<len&&str[i]==' ';i++);

    if(str[i]=='-') {
        temp = -1;
        i++;
    } else if(str[i]=='+') {
        temp = 1;
        i++;
    }

    while(i<len&&str[i]<='9'&&str[i]>='0'){
        result = result * 10 + (str[i] - '0');
        if(temp==1&&result>INT32_MAX) {
            return INT32_MAX;
        } else if(temp==-1&&result-1>INT32_MAX) {
            return INT32_MIN;
        }
        i++;
    }

    return temp*result;
}
#endif //LEETCODE_8STRINGTOINTEGER_ATOI_H
