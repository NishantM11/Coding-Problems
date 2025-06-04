/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
    int length(ListNode *head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        
        int a= length(headA);
        int b= length(headB);

        if (a>b){
            while (a>b){
                headA= headA-> next;
                a--;
            }
        }
        else if (b>a){
            while (b>a){
                headB= headB-> next;
                b--;
            }
        }
        
        while (headA || headB){
            if (headA== headB) return headA;
            headA= headA-> next;
            headB= headB-> next;
        }
    return NULL;
    }
    

};