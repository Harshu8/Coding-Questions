// Leetcode: 102. Binary Tree Level Order Traversal
// link: https://leetcode.com/problems/binary-tree-level-order-traversal/


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        // root is null it means our tree is blank so return ans
        if( root == NULL )
        {
            return ans;
        }
        // create a queue for level order traversal
        queue<TreeNode*> q;
        q.push(root);    // first we push root node into the queue
        
        while( !q.empty() )     // run the while loop untill the queue is not empty
        {
            int size = q.size();
            vector<int> level;   // create a vector for storing the same level node
            for( int i=0;i<size;i++ )   // run the for loop till the the whole element is covered of a same level.
            {
                TreeNode* node = q.front();     // store the front element of queue into the node
                q.pop();        // pop out the front element of the queue
                if( node -> left )  // if there is left child of node is present then store it to the queue
                {
                    q.push(node-> left);
                }
                if( node -> right )     // if there is right child of node is present then store it to the queue
                {
                    q.push( node -> right );
                }
                level.push_back( node -> val );     // now store the node value into the level vector
            }
            ans.push_back(level);   // insert the level vector into the ans vector
        }
        return ans;     // return the ans.
    }
};
