// Leetcode: 94. Binary Tree Inorder Traversal
// link: https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    void inorder( TreeNode* &root, vector<int> &v )
    {
        if( root != NULL )
        {
            inorder( root -> left, v );
            v.push_back( root -> val );
            inorder( root -> right, v );
        }
    }
        
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorder( root, v);
        return v;
    }
};
