//
// Created by zjp on 18-12-12.
//

#ifndef LEETCODE_141LINKEDLISTCYCLE_H
#define LEETCODE_141LINKEDLISTCYCLE_H

/*********************************
 * Given a linked list, determine if it has a cycle in it.
    To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to.
    If pos is -1, then there is no cycle in the linked list.

 * Input: head = [3,2,0,-4], pos = 1
    Output: true
    Explanation: There is a cycle in the linked list, where tail connects to the second node.

 * Input: head = [1,2], pos = 0
    Output: true
    Explanation: There is a cycle in the linked list, where tail connects to the first node.

 * Input: head = [1], pos = -1
    Output: false
    Explanation: There is no cycle in the linked list.

 * 思路：遍历链表，一次快（每次获取后面第二个），一次慢（每次获取后面第一个）
        若快的节点为null或下一个为null，则不包含环
        在若干次之后，若快的节点与慢的节点相同则包含环。（此时快的遍历比慢的遍历领先了一个链表的长度）
        因为fast先进入环，在slow进入之后，如果把slow看作在前面，fast在后面每次循环都向slow靠近1，所以一定会相遇，而不会出现fast直接跳过slow的情况。
 */
#include "ListNode.h"


bool hasCycle(ListNode *head) {
    if(!head||!head->next)
        return false;
    else{
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow!=fast){
            if(!fast||!fast->next)
                return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
}
#endif //LEETCODE_141LINKEDLISTCYCLE_H
