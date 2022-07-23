// GFG: Check for Balanced Tree
// link: https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1


class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    // Use in APPROACH 1
    int height( Node* root ) 
    {
        if( root == NULL )
        {
            return 0;
        }
        int left = height( root -> left );
        int right = height( root -> right );
        return max(left, right)+1;
    }
    
    // Used in APPROACH 2
    pair<bool, int> isBalancedFast( Node* root )
    {
        if( root == NULL )
        {
            pair<bool,int> p = make_pair( true, 0);
            return p;
        }
        
        pair<bool, int> left = isBalancedFast( root -> left );
        pair<bool, int> right = isBalancedFast( root -> right );
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs( left.second - right.second ) <= 1;
        
        pair<bool,int> ans;
        ans.second = max( left.second, right.second ) + 1;
        
        if( leftAns && rightAns && diff )
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
        
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        // APPROACH 1 Time Complexity: O(n^2)
    // /*
        if( root == NULL )
        {
            return true;
        }
        bool left = isBalanced( root -> left );
        bool right = isBalanced( root -> right );
        bool diff = abs( height( root -> left ) - height( root -> right ) ) <= 1;
        if( left && right && diff )
        {
            return true;
        }
        else
        {
            return false;
        }
    // */
    
        // APPROACH 2 Time Complexity: O(n)
        // pair<bool, int> ans = isBalancedFast( root );
        // return ans.first;
    }
};
