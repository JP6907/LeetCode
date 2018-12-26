//
// Created by zjp on 18-12-19.
//

#ifndef LEETCODE_15_3SUM_H
#define LEETCODE_15_3SUM_H

/************************
 * Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

    Note:
    The solution set must not contain duplicate triplets.
    Example:

    Given array nums = [-1, 0, 1, 2, -1, -4],

    A solution set is:
    [
      [-1, 0, 1],
      [-1, -1, 2]
    ]
 */
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    if(nums.size()<3)
        return result;
    int len = nums.size();
    sort(nums.begin(),nums.begin()+len);

    for(int i=0;i<len&&nums[i]<=0;i++){
        if(i>0 && nums[i]==nums[i-1])
            continue;
        int target = 0 - nums[i];
        int sum;
        int left = i+1;
        int right = len-1;
        while(left<right){
            sum = nums[left] + nums[right];
            if(sum==target){
                vector<int> v = {nums[i],nums[left],nums[right]};
                result.push_back(v);
                left++;
                right--;
                //去重
                while(left<right&&nums[left]==v[1])
                    left++;
                while(left<right&&nums[right]==v[2])
                    right--;
            }else if(sum>target)
                right--;
            else
                left++;
        }
    }
    return result;
}
#endif //LEETCODE_15_3SUM_H
