    //
// Created by zjp on 18-11-22.
//

#ifndef LEETCODE_27REMOVEELEMENT_H
#define LEETCODE_27REMOVEELEMENT_H

/********************************
 * Given an array nums and a value val, remove all instances of that value in-place and return the new length.

    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

    The order of elements can be changed. It doesn't matter what you leave beyond the new length.

 * Given nums = [3,2,2,3], val = 3,

    Your function should return length = 2, with the first two elements of nums being 2.

    It doesn't matter what you leave beyond the returned length.

 * Given nums = [0,1,2,2,3,0,4,2], val = 2,

    Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4.

    Note that the order of those five elements can be arbitrary.

    It doesn't matter what values are set beyond the returned length.
 */

#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    if(nums.size()==0||(nums.size()==1&&nums[0]==val))
        return 0;
    else{
        int i = 0;
        int j = 0;
        while(j<nums.size()){
            while(j<nums.size()&&nums[j]==val)
                j++;
            if(j<nums.size()){
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        return i;
    }
}

#endif //LEETCODE_27REMOVEELEMENT_H
