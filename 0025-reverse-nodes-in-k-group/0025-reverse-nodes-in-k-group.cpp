class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;

        // 1. check if k nodes exist
        int count = 0;
        while (curr && count < k) {
            curr = curr->next;
            count++;
        }

        // if less than k → return as it is
        if (count < k) return head;

        // 2. reverse k nodes
        curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        for (int i = 0; i < k; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // 3. connect with remaining list
        head->next = reverseKGroup(curr, k);

        return prev; // new head
    }
};