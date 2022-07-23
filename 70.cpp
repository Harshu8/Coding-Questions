// LC: 110. Balanced Binary Tree
// link Leetcode: https://leetcode.com/problems/balanced-binary-tree/


// Code Leetcode
class Solution {
private:
    int height( TreeNode* root )
    {
        if( root == NULL )
        {
            return 0;
        }
        
        int left = height( root-> left );
        int right = height( root -> right );
        
        int h = max( left, right ) + 1;
        return h;
    }

public:
    bool isBalanced(TreeNode* root) 
    {
        if( root == NULL )
        {
            return true;
        }
        
        bool left = isBalanced( root -> left );
        bool right = isBalanced( root -> right );
        bool diff = abs( height( root-> left ) - height( root -> right ) ) <= 1;
            
        if( left && right && diff )
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
