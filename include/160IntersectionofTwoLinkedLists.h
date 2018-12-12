//
// Created by zjp on 18-12-12.
//

#ifndef LEETCODE_160INTERSECTIONOFTWOLINKEDLISTS_H
#define LEETCODE_160INTERSECTIONOFTWOLINKEDLISTS_H

/***************************************
 * Write a program to find the node at which the intersection of two singly linked lists begins.
 * For example, the following two linked lists:
 *  A:          a1 → a2
                       ↘
                         c1 → c2 → c3
                       ↗
    B:     b1 → b2 → b3
    begin to intersect at node c1.

 * Notes:

    If the two linked lists have no intersection at all, return null.
    The linked lists must retain their original structure after the function returns.
    You may assume there are no cycles anywhere in the entire linked structure.
    Your code should preferably run in O(n) time and use only O(1) memory.
 */

#include "ListNode.h"

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(!headA||!headB)
        return nullptr;
    else{
        int lenA = length(headA);
        int lenB = length(headB);
        int diff = lenA - lenB;
        ListNode *p1,*p2;
        if(diff>0) {
            p1 = headA;
            p2 = headB;
        }else{
            p1 = headB;
            p2 = headA;
            diff = -diff;
        }
        while(diff>0){
            p1 = p1->next;
            diff--;
        }
        while(p1&&p2&&p1!=p2){
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1==p2?p1: nullptr;
    }
}
#endif //LEETCODE_160INTERSECTIONOFTWOLINKEDLISTS_H
