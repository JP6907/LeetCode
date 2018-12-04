//
// Created by zjp on 18-11-28.
//

#ifndef LEETCODE_112PATHSUM_H
#define LEETCODE_112PATHSUM_H

/****************************
 * Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

    Note: A leaf is a node with no children.

    Given the below binary tree and sum = 22,

          5
         / \
        4   8
       /   / \
      11  13  4
     /  \      \
    7    2      1

    return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
 */

#include "TreeNode.h"

bool hasPath(TreeNode* root, int sum) {
    if(!root)
        return sum==0;
    else if(root&&!root->left&&!root->right)
        return root->val == sum;
    else{
        bool l = false;
        bool r = false;
        if(root->left)
            l = hasPath(root->left,sum-root->val);
        if(root->right)
            r = hasPath(root->right,sum-root->val);
        return l||r;
    }
}

bool hasPathSum(TreeNode* root, int sum) {
    if(!root)
        return false;
    else {
        bool result = hasPath(root,sum);
        return result;
    }
}

#endif //LEETCODE_112PATHSUM_H
