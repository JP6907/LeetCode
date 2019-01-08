//
// Created by zjp on 19-1-8.
//

#ifndef LEETCODE_34FINDFIRSTANDLASTPOSITIONOFELEMENTINSORTEDARRAY_H
#define LEETCODE_34FINDFIRSTANDLASTPOSITIONOFELEMENTINSORTEDARRAY_H

/**********************************************
 * Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
    Your algorithm's runtime complexity must be in the order of O(log n).
    If the target is not found in the array, return [-1, -1].

    Input: nums = [5,7,7,8,8,10], target = 8
    Output: [3,4]

     Input: nums = [5,7,7,8,8,10], target = 6
    Output: [-1,-1]

 */
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> index = {-1,-1};
    int l = 0,r = nums.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(nums[mid]==target){
            l = mid-1;
            while(l>=0&&nums[l]==target)
                l--;
            index[0] = l+1;
            r = mid+1;
            while(r<nums.size()&&nums[r]==target)
                r++;
            index[1] = r-1;
            break;

        }else if(nums[mid]>target){ //在左半部分查找
            r = mid -1;
        }else
            l = mid+1;
    }
    return index;
}
#endif //LEETCODE_34FINDFIRSTANDLASTPOSITIONOFELEMENTINSORTEDARRAY_H
