// GFG: Merge two sorted linked lists
// link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1


Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* ans = new Node(0);
    Node* tempans = ans;
    while( head1 && head2 )
    {
        if( head1 -> data > head2 -> data )
        {
            Node* newNode = new Node(head2->data);
            tempans -> next = newNode;
            tempans = newNode;
            head2 = head2 -> next;
        }
        else
        {
            Node* newNode = new Node(head1->data);
            tempans -> next = newNode;
            tempans = newNode;
            head1 = head1 -> next;
            
        }
    }
    while( head1 )
    {
        Node* newNode = new Node(head1->data);
        tempans -> next = newNode;
        tempans = newNode;
        head1 = head1 -> next;
    }
    while( head2 )
    {
        Node* newNode = new Node(head2->data);
        tempans -> next = newNode;
        tempans = newNode;
        head2 = head2 -> next;
    }
    ans = ans -> next;
    return ans;
}  
