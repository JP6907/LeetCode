//
// Created by zjp on 18-11-24.
//

#ifndef LEETCODE_70CLIMBINGSTAIRS_H
#define LEETCODE_70CLIMBINGSTAIRS_H

/*********************************
 * You are climbing a stair case. It takes n steps to reach to the top.

    Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

    Note: Given n will be a positive integer.

 * Input: 2
    Output: 2
    Explanation: There are two ways to climb to the top.
    1. 1 step + 1 step
    2. 2 steps

 * Input: 3
    Output: 3
    Explanation: There are three ways to climb to the top.
    1. 1 step + 1 step + 1 step
    2. 1 step + 2 steps
    3. 2 steps + 1 step
 */

/************************
 * 　n<=1，此时只有一种。

　　n>1时，对于每一个台阶i，要到达台阶，最后一步都有两种方法，从i-1迈一步，或从i-2迈两步。

　　也就是说到达台阶i的方法数=达台阶i-1的方法数+达台阶i-2的方法数。所以该问题是个DP问题。

 */
int climbStairs(int n) {
    if(n<=2)
        return n;
    else{
        int oneStep = 2,twoStep = 1,cur = 0;
        for(int i=3;i<=n;i++){
            cur = oneStep+twoStep;
            twoStep = oneStep;
            oneStep = cur;
        }
        return cur;
    }

}

//递归方法简单，但是会超出时间限制
int climbStairs2(int n) {
    if(n<=2)
        return n;
    else{
        return climbStairs(n-1) + climbStairs(n-2);
    }

}
#endif //LEETCODE_70CLIMBINGSTAIRS_H
