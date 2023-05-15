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
    ListNode* swapNodes(ListNode* head, int k) {
      ListNode *p=head;
        ListNode *q=head;
        int d=0;
        
        while(p)
        {  d++;
            p=p->next;
        } 
        
        p=head;
        
        int m=d-k;
          while(k>1)
            {
             p=p->next;
              k--;
            }
        
          while(m>0)
            {
             q=q->next;
              m--;
            }
          int t=p->val;
          p->val=q->val;
          q->val=t;
        
        return head;
            
    }
};