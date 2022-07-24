// GFG: Preorder traversal (Iterative)
// link: https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/0


class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        vector<int> ans;
        if( root == NULL )
        {
            return ans;
        }
        
        stack<Node*> s;
        s.push(root);
        while( !s.empty() )
        {
            Node* top = s.top();
            s.pop();
            ans.push_back(top->data);
            if( top->right )
                s.push(top->right);
            if( top-> left )
                s.push(top->left);
        }
        return ans;
    }
};
