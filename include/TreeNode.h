//
// Created by zjp on 18-11-25.
//

#ifndef LEETCODE_TREENODE_H
#define LEETCODE_TREENODE_H

#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//按层次建树
TreeNode * levelCreateTree(vector<int> nums,int start) {
    if(nums.size()<=0||nums[start]==INT32_MIN)
        return NULL;
    TreeNode* node = new TreeNode(nums[start]);
    int lchild = 2*start + 1;  //0开始
    int rchild = 2*start + 2;
    if(lchild > nums.size() -1)
        node->left = NULL;
    else
        node->left = levelCreateTree(nums,lchild);

    if(rchild > nums.size() - 1)
        node->right = NULL;
    else
        node->right = levelCreateTree(nums,rchild);
    return node;

}

void printTree(TreeNode* tree){
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(tree);
    while(!nodeQueue.empty()){
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();
        if(node) {
            cout << node->val << " ";
            if(node->left||node->right){
                nodeQueue.push(node->left);
                nodeQueue.push(node->right);
            }
        }
        else {
            cout << "NULL" << " ";
        }

    }
    cout << endl;
}

#endif //LEETCODE_TREENODE_H
