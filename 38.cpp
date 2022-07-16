// GFG: Delete a Node in Single Linked List 
// link: https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions

Node* deleteNode(Node *head,int x)
{
    //Your code here
    if( x == 1 )
    {
        head = head -> next;
        return head;
    }
    int count=1;
    Node* prev = NULL;
    Node* curr = head;
    while( count < x )
    {
        prev = curr;
        curr = curr -> next;
        count++;
    }
    prev -> next = curr -> next;
    return head;
    
}
