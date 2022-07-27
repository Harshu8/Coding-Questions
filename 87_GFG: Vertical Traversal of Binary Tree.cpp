// GFG: Vertical Traversal of Binary Tree
// link: https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> ans;
        if( root==NULL )
        {
            return ans;
        }
        //map<int(horizontal Distance),map<int(level), vector<int > > >
        //it means vector of int type is mapped with horizontal distance and level
        map<int, map<int, vector<int> > > nodes; 
        
        //create a queue in which we put nodee with its horizontal distance and level
        queue<pair<Node*, pair<int ,int> > > q;
        
        q.push( make_pair( root, make_pair(0,0) ) );
        
        while( !q.empty() )
        {
            pair<Node*, pair<int, int> > temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd][lvl].push_back( frontNode->data);
            
            if( frontNode->left )
                q.push( make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
            if( frontNode->right )
                q.push( make_pair( frontNode->right, make_pair( hd+1, lvl+1)));
        }
        for( auto i: nodes)
        {
            for( auto j: i.second )
            {
                // now copy vector of map to ans vector
                for( auto k: j.second )
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};
