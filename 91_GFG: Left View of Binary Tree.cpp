// GFG: Left View of Binary Tree
// link: https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if( root == NULL )
   {
       return ans;
   }
   
   map<int, int> m;
   queue<pair<Node*, int>> q;
   q.push( make_pair( root, 0 ));
   
   while( !q.empty() )
   {
       int size = q.size();
       for( int i=0;i<size;i++ )
       {
           pair<Node*, int> tempNode = q.front();
           q.pop();
           
           Node* frontNode = tempNode.first;
           int level = tempNode.second;
           
           if( m.find(level) == m.end() )
           {
               m[level] = frontNode->data;
           }
           if( frontNode->left )
               q.push( make_pair( frontNode->left, level+1 ));
        
           if( frontNode->right )
               q.push( make_pair( frontNode->right, level+1 ));
       }
   }
   for( auto i : m )
   {
       ans.push_back(i.second);
   }
   
}
