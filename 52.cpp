// GFG: Delete Middle of Linked List
// link: https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1?page=1&category[]=two-pointer-algorithm&sortBy=submissions



int getLength(Node* head)
{
    int l=0;
    while( head )
    {
        l++;
        head = head -> next;
    }
    return l;
}

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
    if( head == NULL || head -> next == NULL)
    {
        return NULL;
    }
    int length = getLength(head);
    int middle = length/2;
    Node* prev = head;
    Node* curr = head;
    int i=0;
    while( i < middle )
    {
        prev = curr;
        curr = curr -> next;
        i++;
    }
    prev -> next = curr -> next;
    return head;
    
    
}
