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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        ListNode *a= list1;
        ListNode *b= list2;

        ListNode *list3= new ListNode();
        ListNode *c= list3;
        ListNode *d= list3;
        while (a && b) {
            if (a->val <= b->val) {
                c->next = a;
                a = a->next;
            } else {
                c->next = b;
                b = b->next;
            }
            c = c->next;
        }

        if (a) c->next = a;
        if (b) c->next = b;
        
        return list3->next;
    }
    
};