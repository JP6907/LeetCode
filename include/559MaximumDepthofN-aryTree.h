//
// Created by zjp on 18-11-26.
//

#ifndef LEETCODE_559MAXIMUMDEPTHOFN_ARYTREE_H
#define LEETCODE_559MAXIMUMDEPTHOFN_ARYTREE_H

/*******************************************
 * Given a n-ary tree, find its maximum depth.

    The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

    For example, given a 3-ary tree:

                   1
             3     2     4
           5    6

    We should return its max depth, which is 3.


    Note:

    The depth of the tree is at most 1000.
    The total number of nodes is at most 5000.
 */
#include <vector>

using namespace std;

class Node {
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};

int maxDepth(Node *root) {
    if (!root)
        return 0;
    else {
        int max = 0;
        for (Node *node:root->children) {
            int depth = maxDepth(node);
            if (depth > max)
                max = depth;
        }
        return max + 1;
    }
}

#endif //LEETCODE_559MAXIMUMDEPTHOFN_ARYTREE_H
