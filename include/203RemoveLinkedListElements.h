//
// Created by zjp on 18-11-23.
//

#ifndef LEETCODE_203REMOVELINKEDLISTELEMENTS_H
#define LEETCODE_203REMOVELINKEDLISTELEMENTS_H

/********************************************
 * Remove all elements from a linked list of integers that have value val.
 * Input:  1->2->6->3->4->5->6, val = 6
    Output: 1->2->3->4->5
 */
#include <cstdio>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeElements(ListNode* head, int val) {
    if(head==NULL)
        return NULL;
    while(head&&head->val==val){
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    if(head){
        ListNode* pre = head;
        ListNode* p = pre->next;
        while(p){
            if(p->val==val){
                ListNode* temp = p;
                p = p->next;
                pre->next = p;
                delete temp;
            }else{
                pre = p;
                p = p->next;
            }
        }
    }
    return head;
}

#endif //LEETCODE_203REMOVELINKEDLISTELEMENTS_H
