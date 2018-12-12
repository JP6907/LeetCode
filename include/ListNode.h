//
// Created by zjp on 18-12-12.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H

#include <vector>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createLinkedList(vector<int> nums){
    if(nums.size()!=0) {
        ListNode* node = new ListNode(nums[0]);
        ListNode* curr = node;
        for(int i=1;i<nums.size();i++){
            ListNode* newNode = new ListNode(nums[i]);
            curr->next = newNode;
            curr = newNode;
        }
        return node;
    } else
        return NULL;
}

//在链表中创建环，使最后一个节点指向第pos个节点
void createCircle(ListNode* head,int pos){
    if(pos>=0&&head){
        ListNode* temp;
        ListNode* curr = head;
        for(int i=0;curr->next!=NULL;i++){
            if(i==pos)
                temp = curr;
            curr = curr->next;
        }
        if(temp)
            curr->next = temp;
    }
}
int length(ListNode* head){
    if(!head)
        return 0;
    else{
        int len = 1;
        ListNode* curr = head->next;
        while(curr){
            len++;
            curr=curr->next;
        }
        return len;
    }
}

void printLinkedList(ListNode* node){
    ListNode* curr = node;
    while(curr!=NULL){
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}
#endif //LEETCODE_LISTNODE_H
