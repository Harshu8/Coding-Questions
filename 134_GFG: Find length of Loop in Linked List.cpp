// GFG: Find length of Loop in Linked List
// link: https://practice.geeksforgeeks.org/problems/find-length-of-loop/1?page=1&difficulty[]=0&status[]=unsolved&category[]=Arrays&category[]=Strings&category[]=Linked%20List&sortBy=submissions

int countNodesinLoop(struct Node *head)
{
    // Code here
    if( head == NULL )
        return 0;
        
    struct Node *fast = head;
    struct Node *slow = head;
    
    while( fast != NULL && fast -> next != NULL )
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        if( slow == fast )
        {
            break;
        }
    }
    if( slow != fast )
        return 0;
        
    int cnt=1;
    while( slow->next != fast )
    {
        slow = slow -> next;
        cnt++;
    }
    return cnt;
}
