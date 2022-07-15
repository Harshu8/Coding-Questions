// GFG: Nth node from end of linked list
// link: https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions#



//Function to find the data of nth node from the end of a linked list.
int getLength( Node* head )
    {
        Node* temp = head;
        int length=0;
        while( temp != NULL )
        {
            temp = temp -> next;
            length++;
        }
        return length;
    }
int getNthFromLast(Node *head, int n)
{
       // Your code here
       
       
       int length = getLength(head);
       if( length < n )
       {
           return -1;
       }
        int index = length - n + 1;
        
        // cout<<"Length: "<<length<<endl;
        // cout<<"index: "<<index<<endl;
        
        if( index == 1 )
        {
            int value = head->data;
            return value;
        }
        Node* curr = head;
        int count=1;
        while( count < index )
        {
            curr = curr -> next;
            count++;
        }
        int val = curr->data; 
        return val;
}

