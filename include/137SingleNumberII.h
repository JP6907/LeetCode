//
// Created by zjp on 18-12-11.
//

#ifndef LEETCODE_137SINGLENUMBERII_H
#define LEETCODE_137SINGLENUMBERII_H

/***********************************
 * Given a non-empty array of integers, every element appears three times except for one,
    which appears exactly once. Find that single one.

    Note:
    Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

    Example 1:
    Input: [2,2,3,2]
    Output: 3

    Example 2:
    Input: [0,1,0,1,0,1,99]
    Output: 99

    思路：（通用做法，无论重复出现的次数为多少）
    将所有数字用二进制表示后，如果所有数重复出现3次，那么所有数的每一位相加之后必定是3的整数倍
    当有一个数只出现一次，那么将所有数的每一位相加后，和3做求模操作，最后的结果就是出现一次的数的二进制表示
    如 2 2 3 2
    2: ...0010
    2: ...0010
    3: ...0011
    2: ...0010 （每一位相加后求3的模，得）
       ...0041
       ...0011 结果为3

 */
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    int count[32] = {0};
    for(int i=0;i<32;i++){
        for(int j=0;j<nums.size();j++)
            count[i] += ((nums[j]>>i)&1);
        count[i]%=3;
        result |= (count[i]<<i);
    }

    return result;
}
#endif //LEETCODE_137SINGLENUMBERII_H
