// GFG: Remove loop in Linked List
// link: https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        if( head == NULL )
        {
            return;
        }
        Node* slow = head;
        Node* fast = head;
        Node* consthead = head;
        // Node* prev = head;
        while( fast != NULL && fast -> next != NULL )
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if( slow == fast )
            {
                while( consthead != slow )
                {
                    // prev = slow;
                    consthead = consthead -> next;
                    slow = slow -> next;
                }
                // do previous of slow element to null.
                while( fast -> next != slow )
                {
                    fast = fast -> next;
                }
                fast -> next = NULL;
                return;
            }
        }
        return;
    }
};
