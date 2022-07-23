// Leetcode: 100. Same Tree OR GFG: Determine if Two Trees are Identical
// link Leetcode: https://leetcode.com/problems/same-tree/ 
// link GFG: https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1


// Leetcode Code:
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



// GFG Code:

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if( r1 == NULL && r2 == NULL )
        {
            return true;
        }
        if( r1 == NULL && r2 != NULL )
        {
            return false;
        }
        if( r1 != NULL && r2 == NULL )
        {
            return false;
        }
        bool left = isIdentical( r1 -> left , r2 -> left );
        bool right = isIdentical( r1 -> right , r2 -> right );
        bool value = r1 -> data == r2 -> data;
        if( left && right && value )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
