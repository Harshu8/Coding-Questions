// GFG: Reverse a Linked List in groups of given size. 
// link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1


class Solution
{
    public:
    
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        // base case
        if( head == NULL )
        {
            return NULL;
        }
        
        node* next = NULL;
        node* curr = head;
        node* prev = NULL;
        int count = 0;
        
        while( curr != NULL && count < k )
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if( next != NULL )
        {
            head -> next = reverse( next, k);
                        
        }
        
        return prev;
        
        
        
        
    }
};
