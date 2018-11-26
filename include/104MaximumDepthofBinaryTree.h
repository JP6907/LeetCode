//
// Created by zjp on 18-11-26.
//

#ifndef LEETCODE_104MAXIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_104MAXIMUMDEPTHOFBINARYTREE_H

/********************************************
 * Given a binary tree, find its maximum depth.

    The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

    Note: A leaf is a node with no children.

 * Given binary tree [3,9,20,null,null,15,7],
 *      3
       / \
      9  20
        /  \
       15   7
 * return its depth = 3.
 */
#include "TreeNode.h"

int maxDepth(TreeNode* root) {
    if(!root)
        return 0;
    else{
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);
        return lDepth>rDepth?lDepth+1:rDepth+1;
    }
}
#endif //LEETCODE_104MAXIMUMDEPTHOFBINARYTREE_H
