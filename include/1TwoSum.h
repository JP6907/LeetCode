//
// Created by zjp on 18-11-21.
//

#ifndef LEETCODE_1TWOSUM_H
#define LEETCODE_1TWOSUM_H

#include <iostream>
#include <vector>
#include <algorithm>

/***********************************
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
     Given nums = [2, 7, 11, 15], target = 9,
    Because nums[0] + nums[1] = 2 + 7 = 9,
  return [0, 1].
 **********************************/


using namespace std;

struct S{
    int val;
    int pos;
    friend bool operator < (S &s1 ,S &s2) {
        return s1.val < s2.val;
    }
};

vector<int> twoSum(vector<int>& nums, int target);
void QuickSort(vector<int>& nums,int low,int high);
int Partition(vector<int>& nums,int low,int high);

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    const int len = nums.size();
    struct S s[len];
    for(int i=0;i<len;i++){
        s[i].val = nums[i];
        s[i].pos = i;
    }
    sort(s,s+len);
    int low = 0, high = len-1;
    while(low<high){
        int sum = s[low].val + s[high].val;
        if(sum == target){
            result.push_back(s[low].pos);
            result.push_back(s[high].pos);
            break;
        }else if(sum > target)
            high--;
        else
            low++;
    }
    return result;
}

void QuickSort(vector<int>& nums,int low,int high){
    if(low<high){
        int pos = Partition(nums,low,high);
        QuickSort(nums,low,pos-1);
        QuickSort(nums,pos+1,high);
    }
}
int Partition(vector<int>& nums,int low,int high) {
    int pivot = nums[low];
    while (low < high) {
        while (low < high) {
            while (low < high && nums[high] >= pivot)
                high--;
            nums[low] = nums[high];
            while (low < high && nums[low] <= pivot)
                low++;
            nums[high] = nums[low];
        }
        nums[low] = pivot;
        return low;
    }
}


#endif //LEETCODE_1TWOSUM_H
