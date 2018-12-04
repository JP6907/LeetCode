//
// Created by zjp on 18-11-28.
//

#ifndef LEETCODE_437PATHSUMIII_H
#define LEETCODE_437PATHSUMIII_H

/*******************************
 * You are given a binary tree in which each node contains an integer value.

    Find the number of paths that sum to a given value.

    The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).

    The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.

    Example:

    root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8

          10
         /  \
        5   -3
       / \    \
      3   2   11
     / \   \
    3  -2   1

    Return 3. The paths that sum to 8 are:

    1.  5 -> 3
    2.  5 -> 2 -> 1
    3. -3 -> 11
 */

#include "TreeNode.h"

//以root为起点判断有没有符合条件的路径
int findPath(TreeNode* root,int sum){
    int res = 0;
    if(!root)
        return 0;
    if(root->val==sum)
        res++;
    res += findPath(root->left,sum-root->val);
    res += findPath(root->right,sum-root->val);
    return res;
}

int pathSum(TreeNode* root, int sum) {
    if(!root)
        return 0;
    return findPath(root,sum) + pathSum(root->left,sum) + pathSum(root->right,sum);
}

//https://segmentfault.com/a/1190000010982979
/**
 * public class Solution {
    public int pathSum(TreeNode root, int sum) {
        if(root == null)
            return 0;
        return findPath(root, sum) + pathSum(root.left, sum) + pathSum(root.right, sum);
    }

    public int findPath(TreeNode root, int sum){
        int res = 0;
        if(root == null)
            return res;
        if(sum == root.val)
            res++;
        res += findPath(root.left, sum - root.val);
        res += findPath(root.right, sum - root.val);
        return res;
    }

}
 */

/**
 * class Solution {
    public:
        int pathSum(TreeNode* root, int sum) {
            if(!root) return 0;
            return sumUp(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
        }
    private:
        int sumUp(TreeNode* root, int pre, int& sum){
            if(!root) return 0;
            int current = pre + root->val;
            return (current == sum) + sumUp(root->left, current, sum) + sumUp(root->right, current, sum);
        }
    };
 */

/**
 *     // 第一种方式, 比较直观
    int sumup(TreeNode *root, int sum) {
        int res = 0;
        if (sum == root->val) ++res;
        if (root->left) res += sumup(root->left, sum - root->val);
        if (root->right) res += sumup(root->right, sum - root->val);
        return res;
    }
    // 第二种方式,比较简洁,更"递归范儿"
    int sumup(TreeNode *root, int sum) {
        if (!root) return 0;
        return (sum == root->val) + sumup(root->left, sum - root->val) + sumup(root->right, sum - root->val);
    }
 */

#endif //LEETCODE_437PATHSUMIII_H
