// GFG - Add two numbers represented by linked lists. 
// Link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

class Solution
{
    public:
    //Function to reverse the linked list.
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
    
    // Function to add two lists
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* l1 = reverse(first); // reverse the first list
        Node* l2 = reverse(second);
        Node* ans = new Node(0);
        Node* temp = ans;
        int sum = 0, carry=0;
        while( l1 != NULL && l2 != NULL )
        {
            sum = l1->data + l2->data + carry;
            carry = sum/10;
            sum = sum %10;
            
            Node* newNode = new Node(sum);
            temp -> next = newNode;
            temp = newNode;
            
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        
        while( l1 != NULL )
        {
            sum = l1->data + carry;
            carry = sum/10;
            sum = sum %10;
            
            Node* newNode = new Node(sum);
            temp -> next = newNode;
            temp = newNode;
            
            l1 = l1 -> next;
        }
        while( l2 != NULL )
        {
            sum = l2->data + carry;
            carry = sum/10;
            sum = sum %10;
            
            Node* newNode = new Node(sum);
            temp -> next = newNode;
            temp = newNode;
            
            l2 = l2 -> next;
        }
        while( carry != 0 )
        {
            sum = carry;
            carry = sum/10;
            sum = sum %10;
            
            Node* newNode = new Node(sum);
            temp -> next = newNode;
            temp = newNode;
            
        }
        
        ans = ans-> next;
        return reverse(ans);
    }
};
