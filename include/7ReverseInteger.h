//
// Created by zjp on 18-11-21.
//
/**********************
 * Given a 32-bit signed integer, reverse digits of an integer.
 * Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1].
 * For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 *
 * Input: 123
    Output: 321

 * Input: -123
   Output: -321

 * Input: 120
   Output: 21
 ************************/
#ifndef LEETCODE_7REVERSEINTEGER_H
#define LEETCODE_7REVERSEINTEGER_H

#include <climits>

int reverse(int x) {
    if(x>INT_MAX)
        return 0;
    int sign = (x>=0)?1:-1;
    x = sign*x;
    long int result = 0;
    while(x>0){
        int temp = x%10;
        if(temp>0||result>0) {
            result = result * 10 + temp;
            if(result > INT_MAX)  //可能会溢出
                return 0;
        }
        x = x / 10;
    }
    result = sign*result;
    return result;
}

#endif //LEETCODE_7REVERSEINTEGER_H
