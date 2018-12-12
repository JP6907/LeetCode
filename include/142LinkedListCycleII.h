//
// Created by zjp on 18-12-12.
//

#ifndef LEETCODE_142LINKEDLISTCYCLEII_H
#define LEETCODE_142LINKEDLISTCYCLEII_H

/**********************************
 * Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
    To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to.
    If pos is -1, then there is no cycle in the linked list.
    Note: Do not modify the linked list.

 * Input: head = [3,2,0,-4], pos = 1
    Output: tail connects to node index 1
    Explanation: There is a cycle in the linked list, where tail connects to the second node.

 * Input: head = [1,2], pos = 0
    Output: tail connects to node index 0
    Explanation: There is a cycle in the linked list, where tail connects to the first node.

 * Input: head = [1], pos = -1
    Output: no cycle
    Explanation: There is no cycle in the linked list.


    https://www.cnblogs.com/hiddenfox/p/3408931.html
    因为fast的速度是slow的两倍，所以fast走的距离是slow的两倍，有 2(a+b) = a+b+c+b，可以得到  a=c
 */
#include "ListNode.h"

ListNode *detectCycle(ListNode *head) {
    if(!head||!head->next)
        return nullptr;
    else{
        ListNode* slow = head;
        ListNode* fast = head;
        while(true){
            if(!fast||!fast->next)
                return nullptr;
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow)
                break;
        }
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
}
#endif //LEETCODE_142LINKEDLISTCYCLEII_H
