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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *left= new ListNode(0);
        ListNode *right= new ListNode(0);
        
        
        ListNode *lefth=left;
        ListNode *righth=right;
        
        while(head!=NULL)
        {
            if(head->val<x)
            {lefth->next=head;
                 lefth=head;}
            
            else 
            {
                 righth->next=head;
                 righth=head;
            }
            head=head->next;    
        }
        
        lefth->next=right->next;    //point left ll to right first node using dummy right node
        righth->next=NULL;
        
        
        return left->next;
        
    }
};