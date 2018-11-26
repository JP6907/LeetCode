//
// Created by zjp on 18-11-26.
//

#ifndef LEETCODE_637AVERAGEOFLEVELSINBINARYTREE_H
#define LEETCODE_637AVERAGEOFLEVELSINBINARYTREE_H

/**********************************************
 * Given a non-empty binary tree, return the average value of the nodes on each level in the form of an array.
 *
 *    Input:
        3
       / \
      9  20
        /  \
       15   7
    Output: [3, 14.5, 11]
    Explanation:
    The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on level 2 is 11. Hence return [3, 14.5, 11].

 * Node : The range of node's value is in the range of 32-bit signed integer.
 */

#include "TreeNode.h"

vector<double> averageOfLevels(TreeNode* root) {
    vector<double> average;
    int front = -1, rear = -1,last = 0;
    queue<TreeNode*> queue;
    TreeNode* p = root;
    queue.push(p);
    rear++;
    double sum = 0;
    double num = last - front;
    while(front<rear){
        ++front;
        p = queue.front();
        queue.pop();
        sum+=p->val;
        if(p->left) {
            queue.push(p->left);
            ++rear;
        }
        if(p->right) {
            queue.push(p->right);
            ++rear;
        }
        if(front==last){
            last = rear;
            average.push_back(sum/num);
            sum = 0;
            num = last - front;
        }
    }
    return average;
}

#endif //LEETCODE_637AVERAGEOFLEVELSINBINARYTREE_H
