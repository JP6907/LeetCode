//
// Created by zjp on 18-12-12.
//

#ifndef LEETCODE_167TWOSUMII_H
#define LEETCODE_167TWOSUMII_H

/*****************************
 * Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.
    The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.

    Note:
    Your returned answers (both index1 and index2) are not zero-based.
    You may assume that each input would have exactly one solution and you may not use the same element twice.

    Input: numbers = [2,7,11,15], target = 9
    Output: [1,2]
    Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.

 */
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0,r = numbers.size() -1;
    while(l<=r){
        int sum = numbers[l]+numbers[r];
        if(sum == target)
            break;
        else if(sum>target)
            r--;
        else
            l++;
    }
    vector<int> result = {l+1,r+1};  //所需要的结果下标是从1开始
    return result;
}
#endif //LEETCODE_167TWOSUMII_H
