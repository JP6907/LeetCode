//
// Created by zjp on 18-11-24.
//

#ifndef LEETCODE_83REMOVEDUPLICATESFROMSORTED_LIST_H
#define LEETCODE_83REMOVEDUPLICATESFROMSORTED_LIST_H

/**************************************************
 * Given a sorted linked list, delete all duplicates such that each element appear only once.
 *
 * Input: 1->1->2
    Output: 1->2

 * Input: 1->1->2->3->3
    Output: 1->2->3
 */
#include <cstdio>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *deleteDuplicates(ListNode *head) {
    if(head==NULL||head->next==NULL)
        return head;
    else{
        ListNode* pre = head;
        ListNode* p = pre->next;
        while(p) {
            if(pre->val == p->val) {   //不要用while
                ListNode *temp = p;
                p = p->next;
                pre->next = p;
                delete temp;
            }else {
                pre = p;
                p = p->next;
            }
        }
        return head;
    }
}

#endif //LEETCODE_83REMOVEDUPLICATESFROMSORTED_LIST_H
