class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        // move fast n steps
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // move both
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        // delete node
        slow->next = slow->next->next;

        return dummy.next;
    }
};