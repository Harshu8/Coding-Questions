// GFG: Inorder Traversal (Iterative)
// link: https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/1


class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int> ans;
        if( root == NULL )
        {
            return ans;
        }
        Node* current = root;
        stack<Node*> st;
        while( !st.empty() || current != NULL )
        {
            while( current != NULL )
            {
                st.push(current);
                current = current -> left;
            }
            current = st.top();
            st.pop();
            ans.push_back( current -> data );
            current = current -> right;
        }
        return ans;
    }
};
