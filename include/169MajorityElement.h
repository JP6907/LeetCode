//
// Created by zjp on 18-12-13.
//

#ifndef LEETCODE_169MAJORITYELEMENT_H
#define LEETCODE_169MAJORITYELEMENT_H

/********************************
 * Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
    You may assume that the array is non-empty and the majority element always exist in the array.

 * Input: [3,2,3]
    Output: 3

 * Input: [2,2,1,1,1,2,2]
    Output: 2

 * 存在情况
 * 数值为负数，导致计数数组下标为负
 * 数值为2^32-1的情况
 */
#include <vector>
#include <stdlib.h>
#include <climits>

using namespace std;

//多数投票算法
int majorityElement(vector<int>& nums){
    int candidate = nums[0];
    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(count==0)
            candidate = nums[i];
        count += (nums[i]==candidate)?1:-1;
    }
    return candidate;
}

//int majorityElement(vector<int>& nums) {
//    int max = INT_MIN;
//    int min = INT_MAX;
//    for(int i=0;i<nums.size();i++) {
//        max = nums[i] > max ? nums[i]: max;
//        min = nums[i] < min ? nums[i]: min;
//    }
//    min = min<0?-min:0;
//    int count0 = 0;
//    int *count1,*count2;
//    if(max>0)
//        count1 = (int*)malloc(sizeof(int)*max); //正数计数
//    if(min>0)
//        count2 = (int*)malloc(sizeof(int)*min); //负数计数
//
//
//    for(int i=0;i<nums.size();i++){
//        int num = nums[i];
//        if(num==0) {
//            if (++count0 > nums.size() / 2)
//                return num;
//        } else if(num>0) {
//            if (++count1[num - 1] > nums.size() / 2)
//                return num;
//        } else {
//            int c = -num -1;
//            int a = count2[-num - 1];
//            int b = nums.size() / 2;
//            if (++count2[-num - 1] > nums.size() / 2)
//                return num;
//        }
//    }
//}
#endif //LEETCODE_169MAJORITYELEMENT_H
