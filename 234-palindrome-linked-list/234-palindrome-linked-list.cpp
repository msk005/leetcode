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
    bool isPalindrome(ListNode* head) {
        stack<int>stk;
        ListNode* p=head;
        
        while(p)
        {
            stk.push(p->val);
            p=p->next;
        }
        
        while(head)
        {
            if(head->val==stk.top())
                stk.pop();
            
            head=head->next;
        }
        
        if(stk.empty())
            return true;
        
        
        return false;
    }
};