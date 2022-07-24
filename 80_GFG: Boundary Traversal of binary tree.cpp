// GFG: Boundary Traversal of binary tree
// link: https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1


class Solution {
public:
    
    void traverseLeft( Node* root, vector<int> &ans){
        if( ( root == NULL ) || ( root->left == NULL && root->right == NULL ) ){
            return;
        }
        
        ans.push_back(root->data);
        if( root->left )
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);
        
        return;
    }
    
    void traverseLeaf( Node* root, vector<int> &ans){
        if(root == NULL){
            return;
        }
        
        if( root->left == NULL && root->right == NULL )
        {
            ans.push_back(root->data);
        }
        if( root->left)
            traverseLeaf(root->left, ans);
        if( root->right)
            traverseLeaf(root->right, ans);
        return;
    }
    
    void traverseRight( Node* root, vector<int> &ans ){
        if( ( root == NULL ) || ( root->left == NULL && root->right == NULL ) )
        {
            return;
        }
        
        if( root->right )
            traverseRight( root->right, ans);
        else
            traverseRight( root->left, ans);
        
        ans.push_back(root->data);
        return;
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        
        vector<int> ans;
        if( root == NULL )
        {
            return ans;
        }
        
        ans.push_back(root->data);
        
        // traverse left side
        traverseLeft( root -> left, ans );
        
        // traverse leaf nodes
        traverseLeaf( root->left, ans);
        traverseLeaf( root->right, ans);
        
        // traverse right node in reverse order
        traverseRight( root->right, ans);
        
        return ans;
    }
};
