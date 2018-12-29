//
// Created by zjp on 18-12-28.
//

#ifndef LEETCODE_184SUM_H
#define LEETCODE_184SUM_H

/**************************
 * Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums
 * such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.
    Note:
    The solution set must not contain duplicate quadruplets.

 Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.         -2 -1 0 0 1 2
    A solution set is:
    [
      [-1,  0, 0, 1],
      [-2, -1, 1, 2],
      [-2,  0, 0, 2]
    ]
 */


/**
 * 和3Sum一样，最外面多加一层循环
 * 和40CombinationSum的区别？？？？？
 */

#include <vector>
#include <algorithm>
using namespace std;

void dfs(vector<int>& nums,vector<int> currentVector,int begin,int target,vector<vector<int>> &result){
    for(int i=begin;i<nums.size();i++){
        if(currentVector.size()==3){
            if(nums[i]==target){
                currentVector.push_back(nums[i]);
                result.push_back(currentVector);
                currentVector.pop_back();
            }
        }else{
            if(i>begin&&nums[i]==nums[i-1])
                continue;
            if(nums[i]<=target){
                currentVector.push_back(nums[i]);
                dfs(nums,currentVector,i+1,target-nums[i],result);
                currentVector.pop_back();
            }else
                break;
        }
    }
}

vector<vector<int>> fourSum1(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    vector<int> currentVector;
    vector<vector<int>> result;
    dfs(nums,currentVector,0,target,result);
    return result;
}

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-3;i++){
        if(i>0&&nums[i]==nums[i-1])  //去重
            continue;
        for(int j=i+1;j<n-2;j++){
            if(j>i+1&&nums[j]==nums[j-1])  //去重
                continue;
            int left=j+1,right=n-1;
            while(left<right){
                int sum = nums[i]+nums[j]+nums[left]+nums[right];
                if(sum==target){
                    vector<int> out{nums[i],nums[j],nums[left],nums[right]};
                    result.push_back(out);
                    while(left<right&&nums[left]==nums[left+1])  //去重
                        left++;
                    while(left<right&&nums[right]==nums[right-1]) //去重
                        right--;
                    left++;
                    right++;
                }else if(sum<right)
                    left++;
                else
                    right--;
            }
        }
    }
    sort(result.begin(),result.end());
    //unique()将重复值放到容器尾部，返回去重后的尾地址
    result.erase(unique(result.begin(),result.end()),result.end());
    return result;
}
#endif //LEETCODE_184SUM_H
