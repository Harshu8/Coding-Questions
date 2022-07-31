// Leetcode: 107. Binary Tree Level Order Traversal II
// link: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/


class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if( root== NULL )
        {
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while( !q.empty() )
        {
            int size = q.size();
            vector<int> level;
            
            for( int i=0;i<size;i++ )
            {
                TreeNode* frontNode = q.front();
                q.pop();
                
                if( frontNode->left )
                    q.push(frontNode->left);
                if( frontNode->right )
                    q.push(frontNode->right);
                
                level.push_back(frontNode->val);
            }
            ans.push_back(level);
        }
        
        reverse( ans.begin(), ans.end() );
        return ans;        
    }
};
