//
// Created by zjp on 18-11-23.
//

#ifndef LEETCODE_35SEARCHINSERTPOSITION_H
#define LEETCODE_35SEARCHINSERTPOSITION_H

/***************************************
 * Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

    You may assume no duplicates in the array.

 * Input: [1,3,5,6], 5
    Output: 2

 * Input: [1,3,5,6], 2
    Output: 1

 * Input: [1,3,5,6], 7
    Output: 4

 * Input: [1,3,5,6], 0
    Output: 0
 */
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    if(nums.size()==0||target<=nums[0])
        return 0;
    int i=0;
    for(;i<nums.size();i++){
        if(i!=nums.size()-1&&nums[i]<target&&nums[i+1]>=target)
            break;
        else if(i==nums.size()-1&&nums[i]<target)
            break;
        else if(nums[i]==target)
            return i;
    }
    return i+1;
}
#endif //LEETCODE_35SEARCHINSERTPOSITION_H
