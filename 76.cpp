// LC: 104. Maximum Depth of Binary Tree
// link: https://leetcode.com/problems/maximum-depth-of-binary-tree/


class Solution {
public:
    int h = 0;
    int maxDepth(TreeNode* root) {
        
        if( root == NULL )
        {
            return 0;
        }
        h = max( maxDepth( root -> left ), maxDepth( root-> right  )) + 1;
        return h;
    }
};
