// GFG: Rearrange a linked list
// link: https://practice.geeksforgeeks.org/problems/rearrange-a-linked-list/1


class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       if( head == NULL || head -> next == NULL )
       {
           return;
       }
        
       Node* odd = head;
       Node* even = head -> next;
       Node* temp = even;
       
       while(temp != NULL && temp -> next != NULL )
       {
           odd -> next = odd -> next -> next;
           temp -> next = temp -> next -> next;
           
           odd = odd -> next;
           temp = temp-> next;
       }
       odd -> next = even;
    }
};
