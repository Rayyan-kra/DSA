class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL) {
            if (slow->val == fast->val) {
                slow->next = fast->next;   
            } else {
                slow = slow->next;         
            }
            fast = fast->next;            
        }

        return head;
    }
};
