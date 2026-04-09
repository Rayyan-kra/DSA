class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // 1. find length
        ListNode* temp = head;
        int len = 1;
        while (temp->next) {
            temp = temp->next;
            len++;
        }

        // 2. make it circular
        temp->next = head;

        // 3. reduce k
        k = k % len;
        int move = len - k;

        // 4. find new tail
        ListNode* newTail = head;
        for (int i = 1; i < move; i++) {
            newTail = newTail->next;
        }

        // 5. break circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};