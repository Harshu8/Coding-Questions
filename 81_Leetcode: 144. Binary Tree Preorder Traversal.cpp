// Leetcode: 144. Binary Tree Preorder Traversal
// link: https://leetcode.com/problems/binary-tree-preorder-traversal/


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if( root == NULL )
        {
            return ans;
        }
        
        stack<TreeNode*> s;
        s.push(root);
        
        while( !s.empty() )
        {
            TreeNode* top = s.top();
            s.pop();
            ans.push_back(top->val);
            if(top->right)
                s.push(top->right);
            if(top->left)
                s.push(top->left);
        }
        return ans;
    }
};
