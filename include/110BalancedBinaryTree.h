//
// Created by zjp on 18-11-26.
//

#ifndef LEETCODE_110BALANCEDBINARYTREE_H
#define LEETCODE_110BALANCEDBINARYTREE_H

/**************************************
 * Given a binary tree, determine if it is height-balanced.

    For this problem, a height-balanced binary tree is defined as:

     a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

 * Given the following tree [3,9,20,null,null,15,7]:

        3
       / \
      9  20
        /  \
       15   7

   Return true.


 * Given the following tree [1,2,2,3,3,null,null,4,4]:

           1
          / \
         2   2
        / \
       3   3
      / \
     4   4

  Return false.
 */
#include "TreeNode.h"

int depth(TreeNode* tree,bool &balanced){
    if(!tree)
        return 0;
    else{
        int ldepth = depth(tree->left,balanced);
        int rdepth = depth(tree->right,balanced);
        if(abs(ldepth-rdepth)>1)
            balanced = false;
        return max(ldepth,rdepth)+1;
    }
}

bool isBalanced(TreeNode* root) {
    bool balanced = true;
    depth(root,balanced);
    return balanced;
}
#endif //LEETCODE_110BALANCEDBINARYTREE_H
