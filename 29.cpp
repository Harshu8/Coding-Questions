// GFG: Given a linked list of 0s, 1s and 2s, sort it.
// link: https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        vector<int> v;
        Node* temp = head;
        while( temp != NULL )
        {
            v.push_back( temp->data );
            temp = temp -> next;
        }
        sort( v.begin(), v.end() );
        Node* ans = new Node(v[0]);
        temp = ans;
        for( int i=1;i<v.size();i++ )
        {
            Node* newNode = new Node(v[i]);
            temp -> next = newNode;
            temp = newNode;
        }
        return ans;
    }
};
