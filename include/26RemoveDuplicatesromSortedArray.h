//
// Created by zjp on 18-11-22.
//

#ifndef LEETCODE_26REMOVEDUPLICATES_ROMSORTEDARRAY_H
#define LEETCODE_26REMOVEDUPLICATES_ROMSORTEDARRAY_H

/*************************************************
 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

 * Given nums = [1,1,2],

    Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

    It doesn't matter what you leave beyond the returned length.

 * Given nums = [0,0,1,1,1,2,2,3,3,4],

    Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

    It doesn't matter what values are set beyond the returned length.
 */
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size()<=1)
        return nums.size();
    else{
        int i=0;
        int j=1;
        for(;j<nums.size();j++){
            while(j<nums.size()&&nums[j]==nums[i])
                j++;
            if(j<nums.size()){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
}
#endif //LEETCODE_26REMOVEDUPLICATES_ROMSORTEDARRAY_H
