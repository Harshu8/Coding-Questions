// Leetcode: 199. Binary Tree Right Side View
// link: https://leetcode.com/problems/binary-tree-right-side-view/


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if( root == NULL )
            return ans;
        
        map<int,int> m;
        queue<pair<TreeNode*, int> > q;
        q.push( make_pair(root,0) );
        while( !q.empty() )
        {
            int size = q.size();
            for( int i=0;i<size;i++ )
            {
                pair<TreeNode*,int> tempNode = q.front();
                q.pop();
                TreeNode* frontNode = tempNode.first;
                int level = tempNode.second;
                
                m[level] = frontNode->val;
                if( frontNode->left )
                    q.push( make_pair(frontNode->left, level+1) );
                if( frontNode->right )
                    q.push( make_pair( frontNode->right, level+1));
            }
        }
        for( auto i: m )
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
