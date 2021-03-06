//
// Created by zjp on 18-12-20.
//

#ifndef LEETCODE_11CONTAINERWITHMOSTWATER_H
#define LEETCODE_11CONTAINERWITHMOSTWATER_H

/****************************************
 * Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai).
 * n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).
 * Find two lines, which together with x-axis forms a container, such that the container contains the most water.

    Note: You may not slant the container and n is at least 2.

 * Input: [1,8,6,2,5,4,8,3,7]
    Output: 49
 */
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int max = 0;
    int l=0,r=height.size()-1;
    while(l<r){
        if(height[l]>height[r]){
            int square = height[r]*(r-l);
            max = max>square?max:square;
            r--;
        }else{
            int square = height[l]*(r-l);
            max = max>square?max:square;
            l++;
        }
    }
    return max;
}
#endif //LEETCODE_11CONTAINERWITHMOSTWATER_H
