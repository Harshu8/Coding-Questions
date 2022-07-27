// GFG: Bottom View of Binary Tree
// link: https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if( root == NULL )
            return ans;
        
        map<int, int> m;
        queue<pair<Node*, int>> q;
        
        q.push( make_pair( root, 0));
        while( !q.empty() )
        {
            int size = q.size();
            for( int i=0;i<size;i++ )
            {
                pair<Node*, int> tempNode = q.front();
                q.pop();
                
                Node* frontNode = tempNode.first;
                int hd = tempNode.second;
                
                m[hd] = frontNode->data;
                
                if( frontNode->left )
                    q.push( make_pair( frontNode->left, hd-1 ) );
                if( frontNode->right )
                    q.push( make_pair( frontNode->right, hd+1 ) );
            }
        }
        for(auto i: m )
        {
            ans.push_back( i.second);
        }
        return ans;
    }
};
