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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      if(right==left)
          return head;
        
        ListNode *dummy=  new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        
        int p=left-1;
        while(p>0)
        {
            prev=prev->next;
            p--;
        }
        ListNode *curr=prev->next;
        
        int distance=right-left;
        while(distance)
        {
            ListNode *forwd=curr->next;
            
          
            curr->next=forwd->next;
            forwd->next=prev->next;
              prev->next=forwd;
            
            
            distance--;
        }
        return dummy->next;
    }
};