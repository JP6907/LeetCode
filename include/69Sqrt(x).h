//
// Created by zjp on 18-11-24.
//

#ifndef LEETCODE_69SQRT_X_H
#define LEETCODE_69SQRT_X_H

/*************************
 * Implement int sqrt(int x).

    Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

    Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

 * Input: 4
    Output: 2

 * Input: 8
    Output: 2
    Explanation: The square root of 8 is 2.82842..., and since
                 the decimal part is truncated, 2 is returned.
 */

//二分法
int mySqrt(int x) {
    if(x<=1)
        return x;
    int left=0,right=x;
    while(left<=right){
        long mid = (left+right)/2;   //必须使用long，否则会溢出
        if(mid*mid==x)
            return mid;
        else if(mid*mid>x)
            right = mid-1;
        else
            left = mid+1;
    }
    return right;
}
#endif //LEETCODE_69SQRT_X_H
