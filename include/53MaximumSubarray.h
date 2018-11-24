//
// Created by zjp on 18-11-24.
//

#ifndef LEETCODE_53MAXIMUMSUBARRAY_H
#define LEETCODE_53MAXIMUMSUBARRAY_H

/***********************************
 * Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
 *
 * Input: [-2,1,-3,4,-1,2,1,-5,4],
    Output: 6
    Explanation: [4,-1,2,1] has the largest sum = 6.

 * If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
 */

#include <vector>
#include <iostream>

using namespace std;

//o(n)
int maxSubArray(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
    else{
        int l=0,r=0;
        int maxSum = nums[0];
        int curSum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(curSum<0) {
                curSum = nums[i];
                l = i;
            }else {
                curSum += nums[i];
            }
            if(curSum > maxSum) {
                maxSum = curSum;
                r = i;
            }
        }
        cout << l << "  " << r << endl;
        return maxSum;
    }
}

int maxSum(vector<int>& nums,int left,int right){
    if(left>right)
        return INT32_MIN;
    if(left==right)
        return nums[left];
    int mid = (left+right)/2;
    int lmaxsum = maxSum(nums,left,mid);
    int rmaxsum = maxSum(nums,mid+1,right);
    int lcentersum = INT32_MIN;
    int rcentersum = INT32_MIN;
    for(int i=mid,cursum=0;i>=left;i--){
        cursum += nums[i];
        if(cursum>lcentersum)
            lcentersum = cursum;
    }
    for(int i=mid+1,cursum=0;i<=right;i++){
        cursum +=nums[i];
        if(cursum>rcentersum)
            rcentersum = cursum;
    }
    int sum = lcentersum + rcentersum;
    if(sum<lmaxsum)
        sum = lmaxsum;
    if(sum<rmaxsum)
        sum = rmaxsum;
    return sum;
}
//分治法
int maxSubArray2(vector<int>& nums){
    if(nums.size()==0)
        return 0;
    else
        return maxSum(nums,0,nums.size()-1);
}

#endif //LEETCODE_53MAXIMUMSUBARRAY_H
