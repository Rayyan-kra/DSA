class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        // move to (left-1) position
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        ListNode* tail = curr;   // will become end after reverse
        ListNode* next = NULL;
        ListNode* pre = NULL;

        // reverse only required part
        for (int i = 0; i <= right - left; i++) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }

        // reconnect
        prev->next = pre;
        tail->next = curr;

        return dummy.next;
    }
};