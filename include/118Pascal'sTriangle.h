//
// Created by zjp on 18-12-3.
//

#ifndef LEETCODE_118PASCAL_STRIANGLE_H
#define LEETCODE_118PASCAL_STRIANGLE_H

/************************************
 * Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
 * In Pascal's triangle, each number is the sum of the two numbers directly above it.
 * Input: 5
    Output:
    [
         [1],
        [1,1],
       [1,2,1],
      [1,3,3,1],
     [1,4,6,4,1]
    ]
 */
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal;
    for(int i=1;i<=numRows;i++){
        vector<int> vec;
        int temp = i;
        if(temp==1||temp==2){
            while(temp--)
                vec.push_back(1);
        }else{
            vec.push_back(1);
            for(int j=2;j<=temp-1;j++){
                vec.push_back(pascal[i-2][j-2]+pascal[i-2][j-1]);
            }
            vec.push_back(1);
        }
        pascal.push_back(vec);
    }
    return pascal;
}
#endif //LEETCODE_118PASCAL_STRIANGLE_H
