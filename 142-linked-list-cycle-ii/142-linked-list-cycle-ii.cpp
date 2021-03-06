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
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
        return NULL;
    
    ListNode *slow  = head;
    ListNode *fast  = head;
    ListNode *entry = NULL;
    
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {                      // there is a cycle
            entry=head;
            while(slow != entry) {               // found the entry location
                slow  = slow->next;
                entry = entry->next;
            }
            return entry;
            // return slow;
        }
    }
    return entry;                  
    }
};