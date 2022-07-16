// GFG: Add 1 to a number represented as linked list
// link: https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#



class Solution
{
    public:
    Node* reverse( Node* head )
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while( curr != NULL )
        {
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        Node* ans = reverse(head);
        Node* temp = ans;
        Node* prev = temp;
        int sum = (temp->data + 1);
        int carry = (temp->data + 1)/10;
        temp -> data = sum%10;
        // cout<<carry<<"::";
        temp = temp -> next;
        while( temp != NULL )
        {
            // cout<<temp->data<<" : ";
            temp -> data = temp -> data + carry ;
            carry = ( temp -> data )/10;
            temp -> data = ( temp -> data ) % 10;
            prev = temp;
            temp = temp-> next;
        }
        if ( carry != 0 )
        {
            Node* newNode = new Node(1);
            prev -> next = newNode;
            carry--;
        }
        
        return reverse(ans);
    }
    
};
