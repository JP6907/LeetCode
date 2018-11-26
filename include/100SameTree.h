//
// Created by zjp on 18-11-25.
//

#ifndef LEETCODE_100SAMETREE_H
#define LEETCODE_100SAMETREE_H

/**************************
 * Given two binary trees, write a function to check if they are the same or not.

    Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

 * Input:      1         1
              / \       / \
             2   3     2   3

            [1,2,3],   [1,2,3]

    Output: true

 * Input:      1         1
              /           \
             2             2

            [1,2],     [1,null,2]

    Output: false

 * Input:      1         1
              / \       / \
             2   1     1   2

            [1,2,1],   [1,1,2]

    Output: false
 */
#include "TreeNode.h"

//层次遍历的方法
bool isSameTree2(TreeNode *p, TreeNode *q) {
    if((!p&&q)||(p&&!q))
        return false;
    else if(!p&&!q)
        return true;
    else{
        queue<TreeNode*> qQueue;
        queue<TreeNode*> pQueue;
        qQueue.push(p);
        pQueue.push(q);
        while(!pQueue.empty()&&!qQueue.empty()){
            TreeNode* pNode = pQueue.front();
            pQueue.pop();
            TreeNode* qNode = qQueue.front();
            qQueue.pop();
            if(pNode->val!=qNode->val)
                return false;

            if(pNode->left&&qNode->left){
                pQueue.push(pNode->left);
                qQueue.push(qNode->left);
            }else if((pNode->left&&!qNode->left)||(!pNode->left&&qNode->left)) {
                return false;
            }

            if(pNode->right&&qNode->right){
                pQueue.push(pNode->right);
                qQueue.push(qNode->right);
            }else if((pNode->right&&!qNode->right)||(!pNode->right&&qNode->right)) {
                return false;
            }
        }
        return true;
    }
}

bool isSameTree(TreeNode *p, TreeNode *q) {
    if(!p&&!q)
        return true;
    else if(p&&q){
        if(p->val!=q->val)
            return false;
        else
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }else
        return false;
}

#endif //LEETCODE_100SAMETREE_H
