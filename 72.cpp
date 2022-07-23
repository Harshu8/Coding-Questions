// GFG: Diameter of a Binary Tree
// link: https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1


class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int height( Node* root ) // This Function is used in Approach 1 
    {
        if( root == NULL )
        {
            return 0;
        }
        int left = height( root -> left );
        int right = height( root -> right );
        return max( left, right )+1;
    }
    
    // use in 2nd Approach
    // in first part of pair we store diameter and in second part we store height
    pair<int,int> diameterFast( Node* root )
    {
        if( root == NULL )
        {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int, int> left = diameterFast( root -> left );
        pair<int, int> right = diameterFast( root -> right );
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int, int> ans;
        ans.first = max( op1, max( op2, op3 ));
        ans.second = max( left.second, right.second ) + 1; 
        
        return ans;
        
    }
    
    int diameter(Node* root) {
        // Your code here
        
        
        //Approach 1 Time Complexity: O(n^2)
        // base case
        /*
        
        if( root == NULL)
        {
            return 0;
        }
        
        int op1 = diameter( root -> left );
        int op2 = diameter( root -> right );
        int op3 = height( root-> left ) + height( root -> right ) + 1;
        return max( op1, max( op2, op3));
        
        */
        
        // Approach 2 using pair Time Complexity: O(n)
        
        pair<int, int> ans = diameterFast( root );
        return ans.first;
        
    }
};
