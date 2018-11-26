//
// Created by zjp on 18-11-26.
//

#ifndef LEETCODE_101SYMMETRICTREE_H
#define LEETCODE_101SYMMETRICTREE_H

/*********************************
 * Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

    For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

        1
       / \
      2   2
     / \ / \
    3  4 4  3


     But the following [1,2,2,null,3,null,3] is not:


        1
       / \
      2   2
       \   \
       3    3
 */
#include "TreeNode.h"
#include "stack"

bool isMirror(TreeNode* left,TreeNode* right){
    if(left==NULL&&right==NULL)
        return true;
    else if(left&&right){
        if(left->val!=right->val)
            return false;
        else
            return isMirror(left->left,right->right) && isMirror(left->right,right->left);
    } else
        return false;
}
bool isSymmetric(TreeNode* root){
    if(!root)
        return true;
    else
        return isMirror(root->left,root->right);
}

//同时NLR和NRL遍历
bool isSymmetric2(TreeNode* root) {
    if(!root||(!root->left&&!root->right))
        return true;
    stack<TreeNode*> lstack;
    stack<TreeNode*> rstack;
    TreeNode* l = root;
    TreeNode* r = root;
    while( (l||!lstack.empty()) && (r||!rstack.empty()) ){
        while(l&&r){
            lstack.push(l);
            rstack.push(r);
            if(l->val!=r->val)
                return false;
            l = l->left;    //NLR
            r = r->right;   //NRL
        }
        if(l||r)
            return false;
        if(!lstack.empty()&&!rstack.empty()){
            l = lstack.top();
            lstack.pop();
            r = rstack.top();
            rstack.pop();
            if(l==r)   //ui退回到 root节点
                return true;
            l = l->right;
            r = r->left;
        }
    }
    return false;
}
#endif //LEETCODE_101SYMMETRICTREE_H
