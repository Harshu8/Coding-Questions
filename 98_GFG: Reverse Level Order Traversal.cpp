// GFG: Reverse Level Order Traversal
// link: https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1


vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    vector<vector<int>> ansTemp;
    if( root == NULL )
    {
        return ans;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while( !q.empty() )
    {
        
        int size = q.size();
        vector<int> level;
        for( int i=0;i<size;i++)
        {
            Node* frontNode = q.front();
            q.pop();
        
            if( frontNode->left)
                q.push(frontNode->left);
            if( frontNode->right)
                q.push(frontNode->right);
            
            
            level.push_back(frontNode->data);
        }
        ansTemp.push_back(level);
    }
    
    for( int i=ansTemp.size()-1;i>=0;i-- )
    {
        for(int j=0;j<ansTemp[i].size();j++)
        {
            ans.push_back(ansTemp[i][j]);
        }
    }
    
    return ans;
}
