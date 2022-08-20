// LC: 111. Minimum Depth of Binary Tree
// link: https://leetcode.com/problems/minimum-depth-of-binary-tree/

class Solution {
 public:
    int minDepth(TreeNode* root) 
    {
        if( root == NULL )
        { 
            return 0;
        }
        
        queue<TreeNode*> q;
        int level = 0;
        
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            level++;
            for(int i=0; i<size; i++)
            {
                TreeNode* parent = q.front(); 
                q.pop();
                
                if(parent->left) 
                    q.push(parent->left);
                if(parent->right) 
                    q.push(parent->right);
                
                if(!parent->left && !parent->right) 
                    return level; 
            }
        }
        return level;
    }
};
