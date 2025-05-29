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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        


        ListNode *temp = head;
        int c=0;
        while (temp->next != NULL){// find lewength of the string
            c++;
            temp= temp-> next;
        }
        temp = head;
        ListNode *p= NULL;
        c=(c-n+1);
        if (c==0) return head->next;

        for (int i=0; i<c; i++){
            p= temp;
            temp = temp-> next;
            
        }
        if (p && temp) {
            p->next = temp->next;
        }
        return head;

    }
};