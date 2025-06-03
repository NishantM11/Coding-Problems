class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k <= 1) return head; // Base case

        ListNode* c = head;
        ListNode* p = NULL;
        ListNode* n = NULL;

        int count = 0;
        ListNode* temp = head;

        // Ensure there are at least K nodes to reverse
        while (temp && count < k) {
            temp = temp->next;
            count++;
        }

        if (count == k) { // Only reverse if we have exactly K nodes
            count = 0;
            while (c && count < k) {
                n = c->next;
                c->next = p;
                p = c;
                c = n;
                count++;
            }

            // Connect the reversed portion to the next segment
            if (n) {
                head->next = reverseKGroup(n, k);
            }

            return p; // New head of the reversed section
        }

        return head; // If fewer than K nodes remain, return as is
    }
};
