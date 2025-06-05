class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) return nullptr;

        ListNode *a = head, *b = head;

        // Step 1: Use Floydâs Cycle Detection Algorithm
        while (b && b->next) {
            a = a->next;
            b = b->next->next;
            if (a == b) { // Cycle detected
                ListNode *x = head;
                while (x != a) {
                    x = x->next;
                    a = a->next;
                }
                return x; // Cycle start node
            }
        }

        return nullptr; // No cycle detected
    }
};
