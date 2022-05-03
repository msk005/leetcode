/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void insertAtTail(Node *&head,Node *&tail,int d)
     {
         Node *newNode= new Node(d);
         if(head==NULL)
         {
             head=tail=newNode;
         }
         
         else
         {
             tail->next=newNode;
             tail=newNode;
         }
     }
public:
    Node* copyRandomList(Node* head) {
                Node *cloneHead=NULL;
        Node *cloneTail=NULL;
        
        Node *temporiginal=head;
        
        while(temporiginal)
        {
            insertAtTail(cloneHead,cloneTail,temporiginal->val);
             temporiginal = temporiginal -> next;
        }
        
         unordered_map<Node *,Node *>oldToNew;
        
        Node *originalNode =head;
        Node *cloneNode=cloneHead;
        
        while(originalNode )
        {
            oldToNew[originalNode]=cloneNode;
            
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        
        originalNode=head;
        cloneNode=cloneHead;
        
        while(originalNode)
        {
            cloneNode->random=oldToNew[originalNode->random];
             originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        return cloneHead;
    }
};