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
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(head==NULL)   //base
           return NULL;
        
        ListNode * nex=NULL;
        ListNode * prev=NULL;
        ListNode * curr=head;
        int c=0;
        
        while(curr!=NULL and c<k)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            c++;
        }
        if(c != k){
            return reverseKGroup(prev, c);
        }
        //recursion
        
            head->next= reverseKGroup(curr,k);
        
        
        return prev;  //head returning
    }
};