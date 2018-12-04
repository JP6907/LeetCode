//
// Created by zjp on 18-11-28.
//

#ifndef LEETCODE_113PATHSUMII_H
#define LEETCODE_113PATHSUMII_H

/******************************
 *
    Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

    Note: A leaf is a node with no children.

    Example:

    Given the below binary tree and sum = 22,

          5
         / \
        4   8
       /   / \
      11  13  4
     /  \    / \
    7    2  5   1

    Return:

    [
       [5,4,11,2],
       [5,8,4,5]
    ]
 */

#include "TreeNode.h"

void findPath(TreeNode* root,vector<int> path, int sum,vector<vector<int>>& paths) {
    if (!root)
        return;
    else {
        path.push_back(root->val);
        if (!root->left && !root->right){
            if(root->val==sum){
                paths.push_back(path);
            }
        }else {
            if (root->left)
                findPath(root->left, path, sum - root->val,paths);
            if (root->right)
                findPath(root->right, path,sum - root->val,paths);
        }
    }
}

vector<vector<int>> pathSum(TreeNode* root, int sum) {
    vector<vector<int>> paths;
    vector<int> path;
    findPath(root,path,sum,paths);
    return paths;
}
#endif //LEETCODE_113PATHSUMII_H
