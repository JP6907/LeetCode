//
// Created by zjp on 18-11-28.
//

#ifndef LEETCODE_111MINIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_111MINIMUMDEPTHOFBINARYTREE_H

/******************************************
 * Given a binary tree, find its minimum depth.

    The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

    Note: A leaf is a node with no children.

 * Given binary tree [3,9,20,null,null,15,7],
 *      3
       / \
      9  20
        /  \
       15   7

   return its minimum depth = 2.

 */

#include "TreeNode.h"
#include <stack>

//后续遍历;
/*int minDepth(TreeNode* root) {
    if(!root)
        return 0;
    int minDepth = INT32_MAX;
    TreeNode* p = root;
    stack<TreeNode*> stack;
    while(p||!stack.empty()){
        while(p) {
            if(p&&!p->left&&!p->right)
                if(stack.size()<minDepth)
                    minDepth = stack.size()+1;
            stack.push(p);
            p = p->left;
        }
        if(!stack.empty()){
            p = stack.top();
            stack.pop();
            p = p->right;
        }
    }
    return minDepth;
}*/
void preOrder(TreeNode* root,int level,int* minDep){
    if(root){
        if(!root->left&&!root->right)
            if(level<*minDep)
                *minDep = level+1;
        if(root->left)
            preOrder(root->left,level+1,minDep);
        if(root->right)
            preOrder(root->right,level+1,minDep);
    }
}

int minDepth(TreeNode* root) {
    if(!root)
        return 0;
    else{
        int* minDep = new int;
        *minDep = INT32_MAX;
        preOrder(root,0,minDep);
        return *minDep;
    }
}

#endif //LEETCODE_111MINIMUMDEPTHOFBINARYTREE_H
