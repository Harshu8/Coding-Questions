// LC: 543. Diameter of Binary Tree
// link: https://leetcode.com/problems/diameter-of-binary-tree/


class Solution {
public:
    pair<int, int> diameter( TreeNode* root )
    {
        if( root == NULL )
        {
            pair<int, int> ans = make_pair( 0, 0 );
            return ans;
        }
        
        pair<int, int> left = diameter( root -> left );
        pair<int, int> right = diameter( root -> right );
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int, int> ans;
        ans.first = max( op1, max( op2, op3));
        ans.second = max( left.second, right.second ) + 1 ;
        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        pair<int, int> ans = diameter( root );
        return ans.first - 1;
    }
};
