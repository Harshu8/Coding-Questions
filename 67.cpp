// LC: 222. Count Complete Tree Nodes
// link: https://leetcode.com/problems/count-complete-tree-nodes/


class Solution {
public:
    void count( TreeNode* root, int &cnt )
    {
        if( root != NULL )
        {
            cnt++;
        }
        if( root -> left != NULL )
        {
            count( root -> left, cnt );
        }
        if( root -> right != NULL )
        {
            count( root -> right, cnt);
        }
        return;        
    }
    int countNodes(TreeNode* root) {
        int cnt = 0;
        if( root == NULL )
        {
            return cnt;
        }
        count( root, cnt );
        return cnt;
    }
};
