// Leetcode: 100. Same Tree
// link: https://leetcode.com/problems/same-tree/


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> t;
        t.push(p);
        t.push(q);
        while( !t.empty() )
        {
            TreeNode* p1 = t.front();
            t.pop();
            TreeNode* q1 = t.front();
            t.pop();
            if( p1 == NULL && q1 == NULL )
            {
                continue;
            }
            if( p1 == NULL || q1 == NULL )
            {
                return false;
            }
            if( p1 -> val != q1 -> val )
            {
                return false;
            }
            t.push(p1->left);
            t.push(q1->left);
            t.push(p1->right);
            t.push(q1->right);
        }
        return true;
    }
};
