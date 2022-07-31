// GFG: Level order traversal in spiral form
// link: https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1



//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> ans;
    if( root == NULL )
        return ans;
    
    queue<Node*> q;
    q.push(root);
    bool leftToRight = false;
    while( !q.empty() )
    {
        int size = q.size();
        vector<int> v;
        for( int i=0;i<size;i++ )
        {
            Node* frontNode = q.front();
            q.pop();
            
            v.push_back(frontNode->data);
        
            if( frontNode->left )
                q.push( frontNode->left );
            if( frontNode->right )
                q.push( frontNode->right );
                
        }
        if( leftToRight )
        {
            for( int i=0;i<v.size();i++ )
            {
                ans.push_back(v[i]);
            }
        }
        else
        {
            for( int i=v.size()-1;i>=0;i-- )
            {
                ans.push_back(v[i]);
            }
        }
        leftToRight = !leftToRight;
    }
    return ans;
}
