// Leetcode: 103. Binary Tree Zigzag Level Order Traversal
// link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        bool leftToRight = true;
        
        while( !q.empty() )
        {
            int size = q.size();
            vector<int> tempAns(size);
            for( int i=0;i<size;i++ )
            {
                TreeNode* frontNode = q.front();
                q.pop();
                
                int index = leftToRight ? i : size - i - 1;
                tempAns[index] = frontNode->val;
                
                if(frontNode->left)
                    q.push(frontNode->left);
                if(frontNode->right)
                    q.push(frontNode->right);
            }
            
            leftToRight = !leftToRight;
            
            ans.push_back(tempAns);
        }
        return ans;
        
    }
};
