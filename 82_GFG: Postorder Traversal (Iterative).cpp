// GFG: Postorder Traversal (Iterative)
// link: https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/1


class Solution{
    public:
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> ans;
        if( root == NULL )
        {
            return ans;
        }
        
        stack<Node*> s1;
        stack<Node*> s2;
        
        s1.push( root );
        while( !s1.empty() )
        {
            Node* top = s1.top();
            s1.pop();
            s2.push(top);
            if( top->left )
                s1.push(top->left);
            if( top->right )
                s1.push(top->right);
        }
        
        while( !s2.empty() )
        {
            Node* top = s2.top();
            s2.pop();
            ans.push_back(top->data);
        }
        return ans;
    }
    
};
