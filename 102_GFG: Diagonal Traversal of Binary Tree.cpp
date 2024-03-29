// GFG: Diagonal Traversal of Binary Tree
// link: https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1


vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;
   if( root == NULL )
        return ans;
   queue<Node*> q;
   q.push(root);
   while( !q.empty() )
   {
       Node* temp = q.front();
       q.pop();
       while( temp != NULL )
       {
           ans.push_back( temp->data );
           if( temp->left != NULL )
           {
               q.push(temp->left);
           }    
           temp = temp->right;
       }
   }
   return ans;
}
