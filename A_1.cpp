// GFG - Remove every k'th node
// Link: https://practice.geeksforgeeks.org/problems/remove-every-kth-node/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

Node* deleteK(Node *head,int k)
{
  //Your code here
  if( k == 1 )
  {
      head = NULL;
      return head;
  }
  int count=0;
  Node* temp = head;
  Node* prev = head;
  while( temp )
  {
      count++;
      if( count == k )
      {
          prev -> next = temp -> next;
          count=0;
      }
      prev = temp;
      temp = temp -> next;
  }
  return head;
}
