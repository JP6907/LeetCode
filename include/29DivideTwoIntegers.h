//
// Created by zjp on 18-12-20.
//

#ifndef LEETCODE_29DIVIDETWOINTEGERS_H
#define LEETCODE_29DIVIDETWOINTEGERS_H

/***********************************
 * Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.
    Return the quotient after dividing dividend by divisor.
    The integer division should truncate toward zero.

 * Note:
    Both dividend and divisor will be 32-bit signed integers.
    The divisor will never be 0.
    Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1].
    For the purpose of this problem, assume that your function returns 231 − 1 when the division result overflows.


 * Input: dividend = 10, divisor = 3
    Output: 3

 * Input: dividend = 7, divisor = -3
    Output: -2
 */
 /**
  * 最简单的思路是被除数每次减去一倍除数，直到小于0，判断减去的次数就可以得出商
  * 但如果被除数非常大，而除数很小，比如 INT_MAX/1 ，用这种方法时间效率很非常底，甚至会超过时间限制
  * 改进方案：
  * 前期指数增长，使用除数不断乘以2，直到达到最大小于被除数的值，记录乘2的次数m
  * 后期使用线性增长，每一增加一倍除数，直到超过被除数，记录加的次数n
  * 则商为2^m+n
  */
#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
    if(dividend==INT32_MIN) {
        if (divisor == 1)
            return dividend;
        else if (divisor == -1)
            return INT32_MAX;
    }
    long dividend1=dividend,divisor1=divisor;
    int sign1,sign2,sign;
    if(dividend1>=0){
        sign1 = 1;
    }else{
        sign1 = -1;
        dividend1 = -dividend1;
    }
    if(divisor1>=0){
        sign2 = 1;
    }else{
        sign2 = -1;
        divisor1 = -divisor1;
    }
    sign = sign1==sign2?1:-1;
    if(dividend1<divisor1)
        return 0;

    //先不断乘以2^m，直到最大的小于被除数的数
    long result = 1;
    long temp = divisor1;
    while((temp<<1)<dividend1){
        temp <<= 1;
        result<<= 1;
    }
    //线性增长，每次加上一倍除数
    while(temp<=dividend1){
        result++;
        temp += divisor1;
    }
    if(temp>dividend1)
        result --;

    return sign>0?result:-result;
}
#endif //LEETCODE_29DIVIDETWOINTEGERS_H
