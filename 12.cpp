// GFG: Delete node in Doubly Linked List
// link: https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

class Solution
{ 
    public:
    int getLength(Node *head)
    {
        int count=1;
        Node* temp = head;
        while( temp->next != NULL )
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    Node* deleteNode(Node *head, int x)
    {
      //Your code here
      int length = getLength(head);
    //   printf("Length: %d\n", length);
      if( x == 1 )
      {
          head = head -> next;
          head -> prev = NULL;
          return head;
      }
      else if( x == length )
      {
            Node* temp = head;
            Node* prevNode = head;
            while( temp->next != NULL )
            {
                prevNode = temp;
                temp = temp->next;
            }
            prevNode -> next = NULL;
            return head;
      }
      else
      {
          int count=1;
          Node* curr = head;
          Node* prevNode = NULL;
          while( count < x )
          {
              prevNode = curr;
              curr = curr -> next;
              count++;
          }
            // printf("PrevNode: %d\n ", prevNode->data);
            // printf("currNode: %d\n ", curr->data);
          curr -> next -> prev = prevNode;
          prevNode ->next = curr -> next;
          delete curr;
          return head;
      }
    }
};
