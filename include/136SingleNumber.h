//
// Created by zjp on 18-12-11.
//

#ifndef LEETCODE_136SINGLENUMBER_H
#define LEETCODE_136SINGLENUMBER_H

/*********************************
 * Given a non-empty array of integers, every element appears twice except for one. Find that single one.

    Note:
    Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

    Example 1:
    Input: [2,2,1]
    Output: 1

    Example 2:
    Input: [4,1,2,1,2]
    Output: 4

   思路： 异或运算中
         交换律a^b = b^a
         性质1：0^a = a
         性质2：a^a = 0

         将所有数做异或运算，最后和0异或，最后的结果就是数量为1的数

 */

#include <vector>
using namespace std;

int singleNumber1(vector<int>& nums) {
    int result = 0;
    for(int i=0;i<nums.size();i++)
        result ^= nums[i];
    return result;
}
//通用做法，参考137
int singleNumber(vector<int>& nums) {
    int result = 0;
    int count[32] = {0};
    for(int i=0;i<32;i++){
        for(int j=0;j<nums.size();j++)
            count[i] += ((nums[j]>>i)&1);
        count[i]%=2;
        result |= (count[i]<<i);
    }

    return result;
}
#endif //LEETCODE_136SINGLENUMBER_H
