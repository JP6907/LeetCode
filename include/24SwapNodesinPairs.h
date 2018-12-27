//
// Created by zjp on 18-12-26.
//

#ifndef LEETCODE_24SWAPNODESINPAIRS_H
#define LEETCODE_24SWAPNODESINPAIRS_H

/***********************************
 * Given a linked list, swap every two adjacent nodes and return its head.
 *
 * Given 1->2->3->4, you should return the list as 2->1->4->3.
 *
 * Notes:
 * Your algorithm should use only constant extra space.
    You may not modify the values in the list's nodes, only nodes itself may be changed.
 */
#include "ListNode.h"

ListNode* swapPairs(ListNode* head) {
    if(!head||!head->next)
        return head;
    ListNode* nextNode = head->next->next; //每两个节点的后继节点
    ListNode* l = head->next;
    l->next = head;
    head->next = nextNode;
    ListNode* pre =l->next;
    while(nextNode){
        if(!nextNode->next)
            break;
        else{
            nextNode = nextNode->next->next;
            ListNode* one = pre->next;
            ListNode* two = one->next;
            two->next = one;
            one->next = nextNode;
            pre->next = two;

            pre = one;
        }
    }
    return l;
}

#endif //LEETCODE_24SWAPNODESINPAIRS_H
