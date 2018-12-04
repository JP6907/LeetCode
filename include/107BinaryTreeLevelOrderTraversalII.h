//
// Created by zjp on 18-11-28.
//

#ifndef LEETCODE_107BINARYTREELEVELORDERTRAVERSALII_H
#define LEETCODE_107BINARYTREELEVELORDERTRAVERSALII_H

/***********************************************
 * Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

    For example:
    Given binary tree [3,9,20,null,null,15,7],

        3
       / \
      9  20
        /  \
       15   7

    return its bottom-up level order traversal as:

    [
      [15,7],
      [9,20],
      [3]
    ]
 */
#include "TreeNode.h"

//从上往下读
void levelOrderup(TreeNode* root,vector<vector<int>> &nodeVector,int level){
    if(root){
        if(nodeVector.size()<=level){
            vector<int> v;
            nodeVector.push_back(v);
        }
        nodeVector[level].push_back(root->val);
        levelOrderup(root->left,nodeVector,level+1);
        levelOrderup(root->right,nodeVector,level+1);
    }
}
//从下往上读
void levelOrder(TreeNode* root,vector<vector<int>> &nodeVector,int level){
    if(root){
        if(nodeVector.size()<=level){
            vector<int> v;
            nodeVector.insert(nodeVector.begin(),1,v);
        }
        nodeVector[nodeVector.size()-level-1].push_back(root->val);
        levelOrder(root->left,nodeVector,level+1);
        levelOrder(root->right,nodeVector,level+1);
    }
}


vector<vector<int>> levelOrderBottom(TreeNode* root) {
    int high = 0;
    TreeNode* p = root;
    vector<vector<int>> nodeVector;
    levelOrder(root,nodeVector,0);
    return nodeVector;
}


#endif //LEETCODE_107BINARYTREELEVELORDERTRAVERSALII_H
