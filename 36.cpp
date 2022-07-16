// GFG: Intersection of two sorted Linked lists
// link: https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#



Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    set<int> s;
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* ans = new Node(10);
    Node* temp = ans;
    
    while( temp1 != NULL )
    {
        s.insert( temp1 -> data );
        temp1 = temp1 -> next;
    }
    int sizeBefore = s.size();
    int sizeAfter = s.size();
    
    while( temp2 != NULL )
    {
        sizeBefore = s.size();
        s.insert( temp2 -> data );
        sizeAfter = s.size();
        if( sizeBefore == sizeAfter )
        {
            int value = temp2 -> data;
            s.erase(value);
            // cout<<value<<" ";
            Node* newNode = new Node(value);
            temp -> next = newNode;
            temp = newNode;
        }
        temp2 = temp2 -> next;
    }
    ans = ans->next;
    return ans;
}
