// GFG: Count BST nodes that lie in a given range
// link: https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1

class Solution{
public:
    void countNode( Node* root, int l, int h, int &count )
    {
        if( root == NULL )
        {
            return;
        }
        else
        {
            if( root->data >= l && root->data <= h )
            {
                count++;
            }
            if( root->left )
                countNode( root->left, l, h, count );
            if( root->right )
                countNode( root->right, l,h, count );
            return;
        }
    }
    int getCount(Node *root, int l, int h)
    {
      // your code goes here   
      int count=0;
      countNode( root,l,h, count);
      return count;
    }
};
