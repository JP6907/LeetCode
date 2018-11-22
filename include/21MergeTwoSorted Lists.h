//
// Created by zjp on 18-11-22.
//

#ifndef LEETCODE_21MERGETWOSORTED_LISTS_H
#define LEETCODE_21MERGETWOSORTED_LISTS_H

/****************************************
 * Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
 * Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
 */
#include <cstdio>
#include <cstdlib>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* head;
    ListNode* p;
    if(l1&&!l2)
        head = l1;
    else if(l2&&!l1)
        head = l2;
    else if(!l1&&!l2)
        head = NULL;
    else{
        if(l1->val<l2->val){
            head = l1;
            p = head;
            l1 = l1->next;
        }else{
            head = l2;
            p = head;
            l2 = l2->next;
        }
        while(l1&&l2){
            if(l1->val<l2->val){
                p->next = l1;
                p = p->next;
                l1 = l1->next;
            }else{
                p->next = l2;
                p = p->next;
                l2 = l2->next;
            }
        }
        if(l1)
            p->next = l1;
        else
            p->next = l2;
    }
    return head;
}

#endif //LEETCODE_21MERGETWOSORTED_LISTS_H
