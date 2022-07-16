// GFG: Delete without head pointer
// link: https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       del -> data = del -> next -> data;
       del -> next = del -> next -> next;
       return;
    }

};
