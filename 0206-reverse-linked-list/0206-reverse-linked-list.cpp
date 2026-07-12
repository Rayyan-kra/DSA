/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode* pre=NULL;
     ListNode* center=NULL;
     ListNode* next=NULL;
     center = head;
     while(center!=NULL){
     next =center->next;
     center->next=pre;

     pre=center;
     center=next;
     }
        return pre;
    }
};