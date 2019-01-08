//
// Created by zjp on 19-1-8.
//

#ifndef LEETCODE_33SEARCHINROTATEDSORTEDARRAY_H
#define LEETCODE_33SEARCHINROTATEDSORTEDARRAY_H

/********************************************
 * Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
    (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
    You are given a target value to search. If found in the array return its index, otherwise return -1.
    You may assume no duplicate exists in the array.
    Your algorithm's runtime complexity must be in the order of O(log n).

    Input: nums = [4,5,6,7,0,1,2], target = 0
    Output: 4

    Input: nums = [4,5,6,7,0,1,2], target = 3
    Output: -1

    思路：
    采用二分法，每次划分之后，必定有存在一部分是有序的
    因为判断目标值是否在无序部分比较麻烦
    可以只只通过判断目标值是否位于有序部分来确定目标值的位置
 */
#include <vector>
using namespace std;

int searchDFS(vector<int>& nums,int target,int l,int r){
    if(l<=r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[l] < nums[mid]) {  //左半部分有序
            if (nums[l] <= target && target <= nums[mid])  //位于左半部分
                return searchDFS(nums, target, l, mid - 1);
            else
                return searchDFS(nums,target,mid+1,r);
        }else{ //右半部分有序
            if(nums[mid+1]<=target&&target<=nums[r])
                return searchDFS(nums,target,mid+1,r);
            else
                return searchDFS(nums,target,l,mid-1);
        }
    } else
        return -1;
}

int search(vector<int>& nums,int target){
    if(nums.size()==1&&nums[0]!=target)
        return -1;
    return searchDFS(nums,target,0,nums.size()-1);
}

int search2(vector<int>& nums, int target) {
    int n = nums.size();
    if(n==1&&nums[0]!=target)
        return -1;
    int l=0,r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[l]<nums[mid]){ //左半边有序
            if(nums[l]<=target&&target<=nums[mid]) //目标存在左半边
                r = mid-1;
            else
                l = mid+1;
        }else{//右半边有序
            if(nums[mid+1]<=target&&target<=nums[r]) //目标在右半边
                l = mid+1;
            else
                r = mid-1;
        }
    }
    return -1;
}


#endif //LEETCODE_33SEARCHINROTATEDSORTEDARRAY_H
