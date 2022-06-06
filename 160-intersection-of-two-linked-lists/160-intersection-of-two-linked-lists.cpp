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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL or headB==NULL)
            return NULL;
        
        ListNode *p=headA;
        stack<ListNode*> stk;
        stack<ListNode*> stk2;
        while(p)
        {
            stk.push(p);
            p=p->next;
        }
        p=headB;
        while(p)
        {
            stk2.push(p);
            p=p->next;
        }
        p=NULL;
        while(!stk.empty() and !stk2.empty() and stk.top()==stk2.top())
        {
            p=stk.top();
            stk.pop();
            stk2.pop();
            
        }
           
        return p;
    }
};