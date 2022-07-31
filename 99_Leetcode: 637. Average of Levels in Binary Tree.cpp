// Leetcode: 637. Average of Levels in Binary Tree
// link: https://leetcode.com/problems/average-of-levels-in-binary-tree/


class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if( root==NULL )
        {
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while( !q.empty() )
        {
            int size = q.size();
            double sum = 0;
            for( int i=0;i<size;i++ )
            {
                TreeNode* frontNode = q.front();
                q.pop();
                
                if( frontNode->left )
                    q.push(frontNode->left);
                if( frontNode->right )
                    q.push(frontNode->right);
                
                sum = sum + frontNode->val;
            }
            double temp = sum / size;
            ans.push_back(temp);
        }
        return ans;      
    }
};
