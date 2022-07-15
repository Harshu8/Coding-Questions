// GFG: Rotate a Linked List
// link: https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* end = head;
        Node* kend = head;
        while( end -> next != NULL )
        {
            end = end -> next;
        }
        int count=1;
        while( count < k )
        {
            kend = kend -> next;
            count++;
        }
        // cout<<"END: "<<end->data<<endl;
        // cout<<"kEnd: "<<kend->data<<endl;
        end -> next = head;
        head = kend -> next;
        kend->next = NULL;
        return head;
    }
};
