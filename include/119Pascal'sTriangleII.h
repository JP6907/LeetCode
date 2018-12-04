//
// Created by zjp on 18-12-3.
//

#ifndef LEETCODE_119PASCAL_STRIANGLEII_H
#define LEETCODE_119PASCAL_STRIANGLEII_H

/**************************************
 * Given a non-negative index k where k ≤ 33, return the kth index row of the Pascal's triangle.

    Note that the row index starts from 0.


 * In Pascal's triangle, each number is the sum of the two numbers directly above it.
 *
 * Input: 3
    Output: [1,3,3,1]


    Could you optimize your algorithm to use only O(k) extra space?
 */
#include <vector>
using namespace std;

//rowIndex starts from 0
vector<int> getRow(int rowIndex) {
    vector<int> vec(rowIndex+1,1);
    if(rowIndex<2)
        return vec;

    for(int i=2;i<=rowIndex;i++){
        for(int j=i-1;j>0;j--){  //从后往前
            vec[j] += vec[j-1];
        }
    }
    return vec;
}
#endif //LEETCODE_119PASCAL_STRIANGLEII_H
