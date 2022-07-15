// GFG - Insert in a Sorted List
// link: https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#


class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node* temp = head;
        Node* newNode = new Node(data);
        if( head -> next == NULL )
        {
            if( data >= head->data )
            {
                head -> next = newNode;
                return head;
            }
            else
            {
                newNode -> next = head;
                head = newNode;
                return head;
            }
        }
        
        if( data <= head->data )
        {
            newNode -> next = head;
            head = newNode;
            return head;
        }
        while( temp -> next != NULL )
        {
            if( ( temp-> data < data ) && ( temp -> next -> data >= data ) )
            {
                newNode -> next = temp -> next;
                temp -> next = newNode;
            }
            temp = temp->next;
        }
        if( data > temp->data )
        {
            temp->next = newNode;
        }
        return head;
    }
};
