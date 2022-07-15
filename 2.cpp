// GFG - Find the Sum of Last N nodes of the Linked List
// Link: https://practice.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#



int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      Node * temp=head;
      int count=0;
      while(temp!=NULL){
          count++;
          temp = temp->next;
      }
      
      int len = count-n;
      temp = head;
      while(len--){
          temp = temp->next;
      }
      
      int sum=0;
      while(temp!=NULL){
          sum+=temp->data;
          temp = temp->next;
      }
      return sum;
}
