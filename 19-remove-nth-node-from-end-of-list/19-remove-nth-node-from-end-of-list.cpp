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
        ListNode *p,*q;
        p=q=head;
        
        while(n)
        {
            p=p->next;
            n--;
        }
        
        if(p==NULL)
            return head->next;
        
        while(p->next!=NULL)
        {
            p=p->next;
            q=q->next;
            
        }
        
        q->next=q->next->next;
        
        return head;
    }
};