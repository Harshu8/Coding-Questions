// GFG: Check If Circular Linked List
// link: https://practice.geeksforgeeks.org/problems/circular-linked-list/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

bool isCircular(Node *head)
{
   // Your code here
   
   if( head == NULL )
   {
       return true;
   }
   Node* temp = head-> next;
   while( temp!=NULL && temp!=head )
   {
       temp = temp -> next;
   }
   if( temp==head )
   {
       return true;
   }
   return false;
}
