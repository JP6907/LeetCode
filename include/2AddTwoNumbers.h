//
// Created by zjp on 18-12-14.
//

#ifndef LEETCODE_2ADDTWONUMBERS_H
#define LEETCODE_2ADDTWONUMBERS_H

/********************************
 * You are given two non-empty linked lists representing two non-negative integers.
    The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
    You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
    Output: 7 -> 0 -> 8
    Explanation: 342 + 465 = 807.
 */
#include "ListNode.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* p1 = l1;
    ListNode* p2 = l2;
    ListNode* result = nullptr;
    ListNode* curr = result;
    int temp = 0;  //进位
    int sum = 0;
    while(p1&&p2){
        sum = p1->val + p2->val + temp;
        if(result==nullptr) {
            result = new ListNode(sum % 10);
            curr = result;
        }
        else{
            ListNode* newNode = new ListNode(sum%10);
            curr->next = newNode;
            curr = newNode;
        }
        temp = sum/10;
        p1 = p1->next;
        p2 = p2->next;
    }
    p1 = (p1== nullptr)?p2:p1;
    while(p1){
        sum = p1->val + temp;
        ListNode* newNode = new ListNode(sum%10);
        curr->next = newNode;
        curr = newNode;
        temp = sum/10;
        p1 = p1->next;
    }
    if(temp!=0){
        ListNode* newNode = new ListNode(temp);
        curr->next = newNode;
    }
    return result;
}
#endif //LEETCODE_2ADDTWONUMBERS_H
