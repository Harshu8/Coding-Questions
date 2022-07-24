// Leetcode: 145. Binary Tree Postorder Traversal
// link: https://leetcode.com/problems/binary-tree-postorder-traversal/


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if( root == NULL )
        {
            return ans;
        }
        
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        
        s1.push(root);
        
        while( !s1.empty() )
        {
            TreeNode* top = s1.top();
            s1.pop();
            s2.push(top);
            if(top->left)
                s1.push(top->left);
            if( top->right )
                s1.push(top->right);
        }
        while( !s2.empty() )
        {
            TreeNode* top = s2.top();
            s2.pop();
            ans.push_back(top->val);
        }
        return ans;
        
    }
};
