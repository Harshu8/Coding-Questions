// GFG: Reverse a linked list
// link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1#


class Solution
{
    public:
    //Function to reverse a linked list.
    
    //APPROACH 3
    Node* reverse2( Node* head )
    {
        if( head == NULL || head->next == NULL )
        {
            return head;
        }
        
        Node* smallHead = reverse2( head -> next );
        head -> next -> next = head;
        head -> next = NULL;
        return smallHead;
        
    }
    
    //APPROACH 2
    void reverse( Node* &head, Node* curr, Node* prev )
    {
        // base case
        if( curr == NULL )
        {
            head = prev;
            return;
        }
        Node* forword = curr->next;
        reverse(head, forword, curr );
        curr -> next = prev;
    }
    
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
    //APPROACH 1
    /*
        Node* prev = NULL;
        Node* curr = head;
        Node* forword = NULL;
        while( curr != NULL )
        {
            forword = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forword;
        }
        return prev;
    */
    
    //APPROACH 2
    /*
        Node* curr = head;
        Node* prev = NULL;
        reverse( head, curr, prev);
        return head;
    */
    
    //APPROACH 3
        return reverse2(head);
    }
    
};
    
